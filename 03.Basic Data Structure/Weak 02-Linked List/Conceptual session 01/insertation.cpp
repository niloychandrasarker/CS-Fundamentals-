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
void insert_at_tail(Node* &head,int val)
{
      Node* newnode=new Node(val);
      if(head==NULL)
      {
            head=newnode;
            return;
      }
      Node* temp=head;
      while(temp->next!=NULL)
      {
            temp=temp->next;
      }
      temp->next=newnode; 
}
void insert_at_head(Node* &head,int val)
{
      Node* newnode=new Node(val);
      if(head==NULL)
      {
            head=newnode;
            return;
      }
      Node* temp=head;
      head=newnode;
      newnode->next=temp; 
}
int getsize(Node* head)
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
void inserted_at_any_position(Node* &head,int pos,int val)
{
      Node* newnode=new Node(val);
      if(pos==1)
      {
          insert_at_head(head,val) ;
          return; 
      }
      else if(pos==getsize(head))
      {
          insert_at_tail(head,val);
          return; 
      }
}
void print_node(Node* head)
{
      Node* temp=head;
while(temp != NULL)
{
      cout<<temp->val<<" ";
      temp=temp->next;
}
cout<<endl;
}
int main()
{
      Node* head=NULL;
      insert_at_tail(head,10);
      insert_at_tail(head,20);
      insert_at_tail(head,30);
      insert_at_tail(head,40);
      insert_at_tail(head,50);

      insert_at_head(head,60);
      insert_at_head(head,70);
      insert_at_head(head,80);
      print_node(head);
      cout<<getsize(head)<<endl;

      inserted_at_any_position(head,1,100);
      inserted_at_any_position(head,9,100);
      print_node(head);


    
    return 0;
}