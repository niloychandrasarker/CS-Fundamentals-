#include <iostream>
class Stack {
private:
    Node* head;
    int size;

public:
    Stack() {
        head = NULL;
        size = 0;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void pop() {
        if (isEmpty()) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int getTop() {
        if (isEmpty()) {
            return -1; // or any other suitable value to indicate an empty stack
        }
        return head->data;
    }
};