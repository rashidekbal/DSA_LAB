//WAP to implement push pop operation in stack using liked list
#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node *next;
    node(int n){
        data=n;
        next=NULL;

    }
};
node *head=NULL;
 void push(int a){
        node *newNode=new node(a);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
     void pop(){
        if(head==NULL){
            cout <<"empty Stack list"<<endl;
            return;
        }
        node *temp=head;
        head=temp->next;
        cout << "deleted "<<temp->data<<endl;
        delete temp;
    }

     void printStack(){
        node *temp=head;
        if(head==NULL){
            cout << "empty stack list"<<endl;
            return;
        }
        cout << "printing stack"<<endl;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        
    }

int main(){
    push(10);
    push(20);
    push(50);
    printStack();
    pop();
    printStack();

return 0;
}
