#include <iostream>
using namespace std;

class Node
{
      public:
      int val;
      Node* next;
      Node* prev;
      Node(int val)
      {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
      }
};

void insert_index(Node* &head, Node* &tail, int index, int value) {
    Node* newNode = new Node(value);

    if (index == 0) 
    {
        newNode->next = head;
        if (head != NULL)
            head->prev = newNode;
        head = newNode;
        if (tail == NULL)
            tail = newNode;
    } 
    else 
    {
        Node* curr = head;
        int currIndex = 0;

        while (curr != NULL && currIndex < index - 1) 
        {
            curr = curr->next;
            currIndex++;
        }

        if (curr == NULL) 
        {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }

        newNode->next = curr->next;
        newNode->prev = curr;

        if (curr->next != NULL)
            curr->next->prev = newNode;
        curr->next = newNode;

        if (tail == curr)
            tail = newNode;
    }

    Node* temp = head;
    cout << "L -> ";
    while (temp != NULL) 
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = tail;
    cout << "R -> ";
    while (temp != NULL) 
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while(Q--) 
    {
        int X, V;
        cin >> X >> V;
       insert_index(head, tail, X, V);
    }

    return 0;
}
