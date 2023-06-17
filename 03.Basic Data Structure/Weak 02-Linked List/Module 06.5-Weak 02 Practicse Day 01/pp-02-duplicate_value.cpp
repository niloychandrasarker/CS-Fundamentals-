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
int size(Node* head)
{
      Node* temp=head;
      int count=0;
      while(temp!=NULL)
      {
            temp=temp->next;
            count++;
      } 
      return count;
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
        vector<int> freq(101, 0);
    bool flag = false;

    Node* temp = head;
    while (temp != NULL) {
        if (freq[temp->val] > 0) {
            flag = true; 
            break;
        }
        freq[temp->val]++;
        temp = temp->next;
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}