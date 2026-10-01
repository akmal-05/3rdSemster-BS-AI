#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void createNode(Node*& head, int val) {
    Node* temp = new Node(val);

    if (head == NULL) {
        head = temp;
    } else {
        Node* current = head;

        while (current->next != NULL) {
            current = current->next;
        }

        current->next = temp;
    }
}

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;
    third->next = NULL;

    createNode(first, 40);

    Node* temp = first;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

