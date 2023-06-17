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
void find_max_value(Node* head) {
//     if (head == nullptr) {
//         std::cout << "Empty list" << std::endl;
//         return;
//     }

    int maxVal = head->val;
    Node* temp = head->next;
    while (temp != NULL) {
        if (temp->val > maxVal) {
            maxVal = temp->val;
        }
        temp = temp->next;
    }
   cout << maxVal<<endl;
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
    find_max_value(head);
    
    return 0;
}