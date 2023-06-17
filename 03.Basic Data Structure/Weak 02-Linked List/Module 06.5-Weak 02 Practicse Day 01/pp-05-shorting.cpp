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
void check_sorted_ascending(Node* head) {
    bool flag = true;
    Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->val > temp->next->val) {
            flag = false;
            break;
        }
        temp = temp->next;
    }

    if (flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
    
    check_sorted_ascending(head);
    
    return 0;
}