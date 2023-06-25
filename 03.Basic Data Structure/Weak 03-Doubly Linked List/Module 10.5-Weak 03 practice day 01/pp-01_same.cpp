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
void inserted_tail(Node *&head, Node *&tail, int val)
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
void check_same(Node* head1, Node* head2) 
{
      Node* temp1=head1;
       Node* temp2=head2;
    while (temp1 != NULL && temp2 != NULL) 
    {
        if (temp1->val != temp2->val) 
        {
            cout <<"NO"<<endl;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == NULL && temp2 == NULL)
    {
        cout<<"YES"<<endl;
    } 
    else 
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        inserted_tail(head1, tail1, val);
    }
         while(true)
    {  
       cin>>val;
       if(val==-1)
       break;
       inserted_tail(head2,tail2,val);
    }
    check_same(head1,head2);
    return 0;
}