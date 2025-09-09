#include <iostream>
#define SIZE 5 // Define the size of the queue
using namespace std;
class Queue {
private:
  int arr[SIZE];
  int front, rear;

public:
  Queue() : front(-1), rear(-1) {}

  // Function to insert an element into the queue
  void enqueue(int value) {
    if (rear == SIZE - 1) {
       cout << "Queue Overflow! Cannot insert " << value <<  endl;
      return;
    }
    if (front == -1) {
      front = 0; // Set front to 0 if inserting the first element
    }
    arr[++rear] = value;
     cout << "Inserted " << value << " into the queue." <<  endl;
  }

  // Function to delete an element from the queue
  void dequeue() {
    if (front == -1 || front > rear) {
       cout << "Queue Underflow! No elements to delete." <<  endl;
      return;
    }
     cout << "Deleted " << arr[front++] << " from the queue." <<  endl;
    if (front > rear) {
      front = rear = -1; // Reset the queue if it becomes empty
    }
  }

  // Function to display the elements of the queue
  void display() {
    if (front == -1 || front > rear) {
       cout << "Queue is empty." <<  endl;
      return;
    }
     cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
       cout << arr[i] << " ";
    }
     cout <<  endl;
  }
};

int main() {
  Queue q;
  int choice, value;

  do {
     cout << "\nQueue Operations:\n";
     cout << "1. Enqueue\n";
     cout << "2. Dequeue\n";
     cout << "3. Display\n";
     cout << "4. Exit\n";
     cout << "Enter your choice: ";
     cin >> choice;

    switch (choice) {
    case 1:
       cout << "Enter the value to insert: ";
       cin >> value;
      q.enqueue(value);
      break;
    case 2:
      q.dequeue();
      break;
    case 3:
      q.display();
      break;
    case 4:
       cout << "Exiting..." <<  endl;
      break;
    default:
       cout << "Invalid choice! Please try again." <<  endl;
    }
  } while (choice != 4);

  return 0;
}