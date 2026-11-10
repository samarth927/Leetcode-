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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        int n = 0;

        // Count nodes
        while(temp != NULL) {
            n++;
            temp = temp->next;
        }

        // Store values in array
        vector<int> arr(n);
        int i = 0;
        while(head != NULL) {
            arr[i] = head->val;
            head = head->next;
            i++;
        }

        // Calculate maximum twin sum
        int j = 0;
        int k = i - 1;
        int maxi = INT_MIN;
        while(j < k) {
            int pairSum = arr[j] + arr[k];
            maxi = max(maxi, pairSum);
            j++;
            k--;
        }
        return maxi;
    }
};