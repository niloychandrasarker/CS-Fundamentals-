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
void size(Node* head1,Node* head2)
{
      Node* temp1=head1;
      int count1=0;
      while(temp1!=NULL)
      {
            temp1=temp1->next;
            count1++;
      } 
      Node* temp2=head2;
      int count2=0;
      while(temp2!=NULL)
      {
            temp2=temp2->next;
            count2++;
      } 

        if (count1 == count2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}

int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int val;
    while(true)
    {  
       cin>>val;
       if(val==-1)
       break;
       inserted_tail(head1,tail1,val);
    }
     while(true)
    {  
       cin>>val;
       if(val==-1)
       break;
       inserted_tail(head2,tail2,val);
    }
    
    size(head1,head2);
       
    return 0;
}