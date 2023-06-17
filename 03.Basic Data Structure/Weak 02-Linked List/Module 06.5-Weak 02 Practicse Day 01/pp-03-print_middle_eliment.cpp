#include<bits/stdc++.h>
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
void inserted_tail( Node* &head,Node* &tail,int val)
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
void printMiddleElements(Node* head) 
{
    if (head == NULL)
    {
        cout<<"Empty linked list"<<std::endl;
        return;
    }

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
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {  
       cin>>val;
       if(val==-1)
       break;
       inserted_tail(head,tail,val);
    }
    
    printMiddleElements(head);
    return 0;
}