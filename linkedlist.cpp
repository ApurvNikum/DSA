#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertatbeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertatend(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deletefrombeginning() {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deletefromend() {
        if (head == NULL) {
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    void insertatNthPosition(int data, int n) {
        if (n == 0) {
            insertatbeginning(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* temp = head;

        for (int i = 0; temp != NULL && i < n - 1; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position out of bounds!" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deletefromNthPosition(int n) {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        if (n == 0) {
            deletefrombeginning();
            return;
        }

        Node* temp = head;

        for (int i = 0; temp != NULL && i < n - 1; i++) {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL) {
            cout << "Position out of bounds!" << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    void traverse() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    list.insertatend(1);
    list.insertatend(2);
    list.insertatend(3);
    list.insertatbeginning(0);

    cout << "List after insertions: ";
    list.traverse();

    list.insertatNthPosition(4, 2); // Insert 4 at position 2
    cout << "List after inserting 4 at position 2: ";
    list.traverse();

    list.deletefromNthPosition(2); // Delete element at position 2
    cout << "List after deleting from position 2: ";
    list.traverse();

    list.deletefrombeginning();
    list.deletefromend();

    cout << "List after deletions: ";
    list.traverse();

    return 0;
}
