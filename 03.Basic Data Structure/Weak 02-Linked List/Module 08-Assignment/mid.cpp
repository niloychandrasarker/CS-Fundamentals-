#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_mid(Node* head) 
{
//     if (head == NULL)
//     {
//         cout<<"Empty linked list"<<std::endl;
//         return;
//     }

    Node* slow = head;
    Node* fast = head;
    Node* prevSlow = NULL;

    while (fast != NULL && fast->next != NULL) 
    {
        fast = fast->next->next;
        prevSlow = slow;
        slow = slow->next;
    }

    if (fast == NULL) {
        // Even number of nodes
        cout<<prevSlow->val<<" "<<slow->val<< std::endl;
    } else {
        // Odd number of nodes
        cout<<slow->val<<endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    print_mid(head);
    return 0;
}