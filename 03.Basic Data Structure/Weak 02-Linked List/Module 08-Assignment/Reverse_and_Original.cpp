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
void print_reverse(Node* n)
{
      if(n==NULL)
      {
            return;
      }
     
      print_reverse(n->next);
       cout<<n->val<<" ";
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
    print_reverse(head);
    cout<<endl;
    print_list(head);
    return 0;
}