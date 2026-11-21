class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;

        // Find kth node from beginning
        for(int i = 1; i < k; i++) {
            first = first->next;
        }

        // Find kth node from end
        ListNode* fast = first;
        ListNode* second = head;
        while(fast->next != NULL) {
            fast = fast->next;
            second = second->next;
        }

        // Swap values
        swap(first->val, second->val);
        return head;
    }
};
