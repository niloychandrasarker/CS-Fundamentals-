class Solution {
public:
int size(ListNode* head )
{
    ListNode* temp=head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int n=size(head);
        for(int i=1 ; i<=n/2 ; i++)
        {
            temp=temp->next;
        }
        return temp;
    }
};

// slow and fast technic

// class Solution
// {
// public:
//     ListNode *middleNode(ListNode *head)
//     {
//         ListNode *slow = head;
//         ListNode *fast = head;
//         while (fast != NULL && fast->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         cout << "My " << slow->val << endl;
//         return slow;
//     }
// };