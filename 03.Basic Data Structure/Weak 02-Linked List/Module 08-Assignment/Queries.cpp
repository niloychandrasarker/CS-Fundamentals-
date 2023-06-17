/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||   Faculty of engineering and technology   ||
||            University of Dhaka            ||
||-------------------------------------------||
*/
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
void inserted_head(Node* &head,Node* &tail,int val)
{
      Node* newnode=new Node(val);
      if(head==NULL)
      {
            head=newnode;
            tail=newnode;
            return;
      }
      Node* temp=head;
      head=newnode;
      newnode->next=temp; 
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
void print(Node* head, Node* tail)
{
      cout<<head->val<<" "<<tail->val<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
      int x,v;
      cin>>x>>v;
      if(x==0)
      {
            inserted_head(head,tail,v);
      }
      else if(x==1)
      {
            inserted_tail(head,tail,v);
      }
      print(head,tail);
    }
   
    return 0;
}