//WAP to find the location of a given element using Binary Search.
#include<iostream>
using namespace std;
void display(int arr[],int size){
  for(int i=0;i<size;i++){
    cout << arr[i]<< " ";
  }
}
int main(){
 int arr[100];
 int size,target,lower,upper,mid;
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
 lower=0;
 upper=size-1;
 while(upper>=lower){
  mid=lower+(upper-lower)/2;
if(arr[mid]==target){
  cout <<"target found at index : "<<mid << " positon : "<<mid+1 <<endl;
  found=true;
  break;
}
if(arr[mid]>target){
  upper=mid-1;
}else if (arr[mid]<target){
  lower=mid+1;

}

 }


 if(!found){
  cout << "target not found"<<endl;
 }

  return 0;
}