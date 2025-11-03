//WAP to implement push pop operations on a queue  using liked list
#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


class Queue {
private:
    Node* front; 
    Node* rear;  
public:
   Queue() {
        front = rear = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

 
        if (rear == nullptr) {
            front = rear = newNode;
            cout << value << " inserted into queue.\n";
            return;
        }

        
        rear->next = newNode;
        rear = newNode;
        cout << value << " inserted into queue.\n";
    }

   
    void pop() {
        if (front == nullptr) {
            cout << "Queue Underflow! No elements to delete.\n";
            return;
        }

        Node* temp = front;
        front = front->next;

       
        if (front == nullptr)
            rear = nullptr;

        cout << temp->data << " removed from queue.\n";
        delete temp;
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Operations ---\n";
        cout << "1. Push (Enqueue)\n";
        cout << "2. Pop (Dequeue)\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            q.push(value);
            break;
        case 2:
            q.pop();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        
    } while (choice != 4);

    return 0;
}
s