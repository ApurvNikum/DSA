#include <iostream>
using namespace std;

int front = -1, rear = -1; // Initialize front and rear to -1
int *arr;                 // Pointer for dynamically allocated array
int max_size;             // Maximum size of the queue

// Function to check if the queue is full
bool ISFULL() {
    return (rear == max_size - 1);
}

// Function to check if the queue is empty
bool ISEMPTY() {
    return (front == -1 && rear == -1);
}

// Function to add an element to the queue (enqueue)
void enqueue(int x) {
    if (ISFULL()) {
        cout << "Cannot add element as queue is full.\n";
        return;
    }
    if (ISEMPTY()) { // If queue is empty, initialize front and rear
        front = rear = 0;
    } else {
        rear += 1; // Increment rear for adding new element
    }
    arr[rear] = x; // Add element to the rear of the queue
}

// Function to remove an element from the queue (dequeue)
void dequeue() {
    if (ISEMPTY()) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << arr[front] << " dequeued from the queue.\n"; // Print dequeued element
    if (front == rear) { // If only one element was present
        front = rear = -1; // Reset front and rear
    } else {
        front += 1; // Increment front to point to the next element
    }
}

// Function to display elements of the queue
void display() {
    if (ISEMPTY()) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) { // Loop from front to rear
            cout << arr[i] << " ";
        }
        cout << "\nRear element of queue is: " << arr[rear] << "\n";
    }
}

int main() {
    cout << "Enter the size of the Queue: ";
    cin >> max_size;

    // Dynamically allocate memory for the array
    arr = new int[max_size];

    int choice, x;
    do {
        cout << "\nSelect one option from the following:\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter an element to add to the Queue: ";
                cin >> x;
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting...\n";
                delete[] arr; // Free the allocated memory
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (true);

    return 0;
}
