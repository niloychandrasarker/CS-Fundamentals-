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
void delete_node(Node* head,int pos)
{
     
      Node* temp=head;
      for(int i=1 ; i<=pos-1 ; i++)
      {
            temp=temp->next;
      }
      Node* deletenode=temp->next;
      temp->next=temp->next->next;
      delete deletenode;
}
void delete_head(Node* &head)
{
      Node* deletehead=head;
      head=head->next;
      delete deletehead;
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
      print_list(head);
      int pos;
      cin>>pos;
      if(pos>size(head))
      {
            cout<<"invalid"<<endl;
      }
      else if(pos==0)
      {
            delete_head(head);
      }
      else
      {
            delete_node(head,pos);
      }
      
      print_list(head);

    return 0;
}