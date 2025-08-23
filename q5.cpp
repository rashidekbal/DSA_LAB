//Q.5 WAP to implement push and pop operation on a stack using linear array.

#include <iostream>
using namespace std;

class stack{
   private :
   int  max =3;
   int arr[3];
   int top;
    public :
   stack(){
    top=0;
   }
   void push(int item){
    if(top==max){
      cout << "stack overflow exception "<< endl;
      return ;  
    }
    cout << item << " added to stack"<<endl;
    arr[top]=item;
    top++;

   }
   void pop(){
    if(top-1<0){
    
      cout << "stack underflow exception "<<endl;
      return ;

    }
       cout <<  "top popped from stack"<<endl;
    top--;
   }
   void display(){
    for(int i=0;i<top;i++){
      cout << arr[i]<< " ";
    }
   }
};

int main(){
  stack st1;
  st1.push(4);
  st1.push(5);
  st1.push(6);
  st1.push(9);
  cout << "elements in stack : "<<endl;
  st1.display();
  cout <<endl;
  st1.pop();
  st1.pop();
  st1.pop();
    st1.pop();
    cout << "elements in stack : "<<endl;
  st1.display();

  return 0;
}