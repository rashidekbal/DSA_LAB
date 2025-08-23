//WAP to find the location of a given element using Linear Search.
#include<iostream>
using namespace std;
void display(int arr[],int size){
  for(int i=0;i<size;i++){
    cout << arr[i]<< " ";
  }
}
int main(){
 int arr[100];
 int size,target;
 bool found=false;

 cout << "enter size of array : " ;
 cin >> size; //taking size of array
 cout << "enter "<< size<< " elements in array" <<endl;
 for(int i=0;i<size;i++){
  cout << "enter element for index  "<<i << " :";
  cin >> arr[i]; //adding elements to the array
 }
 cout << "entered elements are : ";
 display(arr,size); //displaying added elements
 cout << endl;
 cout << "enter target to search : ";
 cin >>target;
 for(int i=0;i<size;i++){
  if(arr[i]==target){
     found=true;
     cout << "target found at index :"<<i <<" or at position : "<<i+1<<endl;
     break;
  }
 }
 if(!found){
  cout << "target not found"<<endl;
 }

  return 0;
}