//Q10.WAP a menu driven program to perform following insertion operation in a linked list :
//i. delete from beginning 
//ii. delete from end
//iii. delete after a given node
//iv.  traversing a linked list 
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

class LinkedList{
    private :
    node *head,*tail;
    public :
    LinkedList(){
        tail=head=NULL;
    }
    void pushFront(int a){
        node *newNode=new node(a);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    void pushEnd(int x){
        node *newNode=new node(x);
        if(tail==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
  
    void printLL(){
        node *temp=head;
        if(head==NULL){
            cout << "empty linked list"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<" null"<<endl;
    }
    void popFront(){
        if(head==NULL){
            cout <<"empty linked list"<<endl;
            return;
        }
        node *temp=head;
        head=temp->next;
        cout << "deleted "<<temp->data<<endl;
        delete temp;
    }
    void popEnd(){
        if(tail==NULL){
            cout << "empty linked list"<<endl;
            return;
        }
        node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        cout <<"deleted "<<temp->next->data<<endl;
        delete temp->next;
        temp->next=NULL;
    }
    void popAt(int position){
        node *temp=head;
        if(head==NULL){
            cout << "empty linked list"<<endl;
            return;
        }
        if(position==1){
            popFront();
            return ;
        }
        for(int i=1;i<position-1;i++){
            if(temp->next==NULL){
                cout << "invalid position"<<endl;
            }
            temp=temp->next;

        }
        if(temp!=NULL){
            node *superTemp=temp->next;
           temp->next =temp->next->next;
           cout << "deleted "<<superTemp->data<<endl;
           delete superTemp;
           
        }
    }
};

int main(){
    LinkedList ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.pushFront(3);
     ll.pushFront(4);
    ll.pushFront(5);
    ll.pushFront(6);
     ll.pushFront(7);
    ll.pushFront(8);
    ll.pushFront(9);
    
    int choice,position;
    while(1){
        cout << "1. delete from beginning "<<endl;
        cout << "2. to delete from end"<<endl;
        cout << "3. to delete after a given node"<<endl;
        cout << "4. to traverse through the ll"<<endl;
        cout << "5. to exit"<<endl;
        cin >>choice;

        switch(choice){
            case 1:
            
            ll.popFront();
            break;

            case 2:
            ll.popEnd();
            break;
            case 3 :
            cout <<"enter position to pop "<<endl;
            cin >>position;
            ll.popAt(position);
            break;
            case 4:
            ll.printLL();
            break;
            case 5:
            return 0;
            break;
            default : 
            cout <<"invalid selection"<<endl;
        }
    }

    return 0;
}