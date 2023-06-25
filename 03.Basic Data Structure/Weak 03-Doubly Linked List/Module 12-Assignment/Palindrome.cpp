/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
#include <iostream>
using namespace std;

class Node
{
      public:
      int val;
      Node* next;
      Node(int val)
      {
            this->val=val;
            this->next=NULL;
      }
};

void insert_tail( Node* &head,Node* &tail,int val)
{
      Node* newnode= new Node(val);
      if(head==NULL)
      {
            head=newnode;
            tail=newnode;
            return;
      }
      tail->next=newnode;
      tail=newnode;
      
}

void Cheak_palindrome(Node* head) 
{
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while (fast != NULL && fast->next != NULL) 
    {
        fast = fast->next->next;

        Node* next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    if (fast != NULL)
        slow = slow->next;

    while (prev != NULL) 
    {
        if (prev->val != slow->val) 
        {
            cout << "NO" << endl;
            return;
        }
        prev = prev->next;
        slow = slow->next;
    }

    cout << "YES" << endl;
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) 
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    Cheak_palindrome(head);

    return 0;
}
