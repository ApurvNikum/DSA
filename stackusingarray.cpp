#include <iostream>
using namespace std;

const int STACK_SIZE = 5; // define the size of the array
int arr[STACK_SIZE];
int top = -1;

bool isfull() {
return (top == STACK_SIZE - 1);
}

bool isempty() {
return (top == -1);
}

bool push(int x) {
if (isfull()) {
cout << "Stack overflow" << endl;
return false;
} else {
top = top + 1;
arr[top] = x;
return true;
}
}

bool pop() {
if (isempty()) {
cout << "Stack underflow" << endl;
return false;
} else {
top = top - 1;
return true;
}
}

int peek() {
if (!isempty()) {
return arr[top];
} else {
cout << "Stack is empty" << endl;
return -1; // or any other error value
}
}

int main() {
int choice, value;
while (true) {
    cout << "\nChoose an operation:\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Peek (View top element)\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            cout << "Top Element: " << peek() << endl;
            break;
        case 4:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
    }
}

return 0;
}
