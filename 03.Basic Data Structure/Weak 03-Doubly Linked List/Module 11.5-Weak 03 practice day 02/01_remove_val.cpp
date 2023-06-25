class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      
    if (head == NULL) {
        return NULL;
    }

    
    while (head !=NULL && head->val == val) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    ListNode* cur = head;
    while (cur != NULL && cur->next != NULL) {
        if (cur->next->val == val) {
            ListNode* temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
        } 
        else {
            cur = cur->next;
        }
    }

    return head;
}
        
        
    
};