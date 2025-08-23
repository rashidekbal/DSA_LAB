//WAP to insert a new element at end as well as at given position in an array. 
#include<iostream>
using namespace std;
void display(int arr[],int size){
  for(int i=0;i<size;i++){
    cout << arr[i]<< " ";
  }
}
int main(){
 int arr[100];
 int size,value,position;

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
 cout << "enter element to add at end of an array : ";
 cin >>value;
 arr[size++]=value;  // adding element at last of array and increasing size
  cout << "elemets after adding in end: ";
 display(arr,size);

 cout <<endl;
 cout << "enter position to enter : ";
 cin >> position;
 cout << "enter value to enter at positon " <<position <<" :";
 cin >>value;
 size++;
 for(int i=size-1;i>=position-1;i--){ //shifting elements from postition to pos+1
  arr[i]=arr[i-1];
 }
 arr[position-1]=value;
 cout << "elemets after adding at postion  "<< position<< " :" ;
 display(arr,size);
  return 0;
}