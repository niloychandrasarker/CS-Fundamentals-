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
void print_recursivly(Node* n)
{
      if(n==NULL)
      {
            return;
      }
      cout<<n->val<<" ";
      print_recursivly(n->next);
      
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
    print_recursivly(head);
    cout<<endl;
    print_reverse(head);
    return 0;
}