/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int bit[30];
        int i = 0;

        while (temp != NULL) {
            bit[i] = temp->val;
            i++;
            temp = temp->next;
        }

        int n = i;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int idx = n - i - 1;
            sum += bit[i] * pow(2, idx);
        }

        return sum;
    }
};
