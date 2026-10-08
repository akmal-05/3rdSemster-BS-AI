#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

// pushing function
void push(int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Add = " << value << endl;
}
// pop fun
void pop() {
    if (top == NULL) {
        cout << "Empty Stack" << endl;
        return;
    }
    Node* temp = top;
    cout << "Removed: " << top->data << endl;
    top = top->next;

    delete temp;
}
// Peek
void peek() {
    if (top == NULL) {
        cout << "Empty Stack" << endl;
        return;
    }
    cout << "Top Element: " << top->data << endl;
}

// Display
void display() {
    if (top == NULL) {
        cout << "Empty Stack" << endl;
        return;
    }
    Node* temp = top;
    cout << "Stack: ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Empty check
void checkEmpty() {
    if (top == NULL) {
        cout << "Stack is Empty" << endl;
    }
    else {
        cout << "Stack is Not Empty" << endl;
    }
}

int main() {
    int choice;
    int value;

    do {
        cout << "\n========= bookbank =========" << endl;
        cout << "1. push book" << endl;
        cout << "2. pop book" << endl;
        cout << "3. peek top book" << endl;
        cout << "4. display stack" << endl;
        cout << "5. check empty" << endl;
        cout << "6. exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter book number: ";
            cin >> value;
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            checkEmpty();
            break;

        case 6:
            cout << "Program Ended" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
        }

    } while (choice != 6);
    return 0;
}
