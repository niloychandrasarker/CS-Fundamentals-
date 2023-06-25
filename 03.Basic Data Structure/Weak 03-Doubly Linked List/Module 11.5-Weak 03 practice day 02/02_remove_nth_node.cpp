class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return NULL;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        // Move fast pointer n nodes ahead
        for (int i = 0; i < n; ++i) {
            if (fast == NULL) {
                return NULL; // Invalid input, n is greater than the size of the list
            }
            fast = fast->next;
        }
        
        // Handle the case where the first node needs to be deleted
        if (fast == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        // Move both pointers until the fast pointer reaches the end
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Remove the nth node from the end
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        
        return head;
    }
};