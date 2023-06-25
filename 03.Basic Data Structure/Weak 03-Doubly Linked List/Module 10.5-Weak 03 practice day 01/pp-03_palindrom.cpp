#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// void print_normal(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

void Cheak_palindrome(Node* head,Node* tail)
{
       while (head != NULL && tail != NULL) {
        if (head->val != tail->val) {
        cout<<"NO"<<endl;
            return;
        }
        head = head->next;
        tail = tail->prev;
    }
    cout<<"YES"<<endl;
}

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
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
   Cheak_palindrome(head,tail);
    
    return 0;
}