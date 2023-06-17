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

      //    cout<<a->val<<endl;
      //    cout<<b->val<<endl;
      //    cout<<c->val<<endl;
      //    cout<<d->val<<endl;
      head->next=a;
      a->next=b;
      b->next=c;
      c->next=d;

      print_list(head);

     

    
    return 0;
}