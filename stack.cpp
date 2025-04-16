#include <iostream>
using namespace std;

int* arr;
int top = -1;
int MAX_SIZE;

bool ISFULL() {
    return (top == MAX_SIZE - 1);
}

bool ISEMPTY() {
    return (top == -1);
}

void push(int x) {
    if (ISFULL()) {
        cout << "Stack overflow, cannot push " << x << " onto the stack.\n";
    } else {
        top++;
        arr[top] = x;
        cout << x << " pushed to the stack.\n";
    }
}

void pop() {
    if (ISEMPTY()) {
        cout << "Stack underflow, cannot pop from the stack.\n";
    } else {
        cout << arr[top] << " popped from the stack.\n";
        top--;
    }
}

void display() {
    if (ISEMPTY()) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << "\nTop element of stack is: " << arr[top] << "\n";
    }
}

int main() {
    cout << "Enter the size of the stack: ";
    cin >> MAX_SIZE;

    // Dynamically allocate memory for the array
    arr = new int[MAX_SIZE];

    int choice, x;

    do {
        cout << "\nSelect one option from the following:\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter an element to push to the stack: ";
                cin >> x;
                push(x);
                break;
            case 2:
                pop();
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
