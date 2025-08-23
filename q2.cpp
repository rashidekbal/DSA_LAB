//WAP to delete an element from a given whose value is given or whose position is given.
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
 bool found=false;

 cout << "enter size of array : " ;
 cin >> size; //taking size of array
 cout << "enter "<< size<< " elements in array" <<endl;
 for(int i=0;i<size;i++){
  cout << "enter element for index  "<<i << " : ";
  cin >> arr[i]; //adding elements to the array
 }
 cout << "entered elements are : ";
 display(arr,size); //displaying added elements
 cout << endl;
 cout << "enter element to be Deleted : ";
 cin >>value;
 cout << "deleting , NOTE :- only first matching value is deleted"<< endl;
 for (int i=0;i<size;i++){
    if(arr[i]==value){
      position=i;
      found=true;
      break;
    }

 }
 if(found){

  for(int i=position ; i<size;i++){
    arr[i]=arr[i+1];
  }
  size--;
   cout << "array after deleting  "<<value<< " : ";
 display(arr,size);
 cout <<endl;

 }else{
  cout << "no such element in the array given "<<endl;
 }
 cout << "enter position to delete : ";
 cin >> position;
 if(position>size||position <1){
  cout << "index out of bound no such positon " <<endl;
 }else{
   for(int i=position-1 ; i<size;i++){
    arr[i]=arr[i+1];
  }
  size --;

   cout << "array after deleting  value at position : "<<position<< " : ";
 display(arr,size);
 }


  return 0;
}