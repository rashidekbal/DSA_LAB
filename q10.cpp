//Q10.WAP a menu driven program to perform following insertion operation in a linked list :
//i. insertion at beginning 
//ii. insertion at end
//iii. insertion after a given node
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
    void pushAt(int ind,int val){
        node *temp=head;
        if(ind==0){
            cout << "invalid postion : must be greater than or equal 1"<<endl;
        }
        if(ind==1){
            pushFront(val);
            return;
        }
        for(int i=1;i<ind-1;i++){
            if(temp==NULL){
                cout << "invalid position "<<endl;
                break;
            }
            temp=temp->next;
        };
        if(temp!=NULL){
            node *newNode=new node(val);
            newNode->next=temp->next;
            temp->next=newNode;
        }
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
};

int main(){
    LinkedList ll;
    int choice,value,position;
    while(1){
        cout << "1. to insert at beginning "<<endl;
        cout << "2. to insert at end"<<endl;
        cout << "3. to insert at a given node"<<endl;
        cout << "4. to traverse through the ll"<<endl;
        cout << "5. to exit"<<endl;
        cin >>choice;

        switch(choice){
            case 1:
            cout <<"enter value to push at beginning "<<endl;
            cin >>value;
            ll.pushFront(value);
            break;

            case 2:
            cout <<"enter value to push at end "<<endl;
            cin >>value;
            ll.pushFront(value);
            break;
            case 3 :
            cout <<"enter position to push at  "<<endl;
            cin >>position;
            cout <<"enter value to push at end "<<endl;
            cin >>value;
            ll.pushAt(position,value);
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