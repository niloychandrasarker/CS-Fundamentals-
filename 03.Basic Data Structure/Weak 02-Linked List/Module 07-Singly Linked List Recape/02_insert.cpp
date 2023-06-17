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
void insert(Node* &head,int pos,int val)
{
      Node* newnode=new Node(val);
      Node* temp=head;
      for(int i=1 ; i<=pos-1 ; i++)
      {
            temp=temp->next;
      }
      newnode->next=temp->next;
      temp->next=newnode;
}
void inserted_head(Node* &head,int val)
{
      Node* newnode=new Node(val);
      newnode->next=head;
      head=newnode;

}
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

void print_list( Node* head)
{
    Node* temp=head;
      while(temp!=NULL)
      {
            
            cout<<temp->val<<" ";
            temp=temp->next;
      }
  cout<<endl;
}
int main()
{
      Node* head=new Node(1);
      Node* a=new Node(10);
       Node* b=new Node(20);
        Node*  c=new Node(30);
         Node* d=new Node(40);
         Node* tail=d;

      head->next=a;
      a->next=b;
      b->next=c;
      c->next=d;
      int pos,val;
      cin>>pos>>val;
      if(pos>size(head))
      {
            cout<<"invalid"<<endl;
      }
      else if(pos==0)
      {
            inserted_head(head,val);
      }
      else if(pos==size(head))
      {
            inserted_head(head,val);
      }
      else
      {
          insert(head,pos,val);  
      }
      cout<<size(head)<<endl;
      print_list(head);

    return 0;
}