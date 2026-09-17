class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();

        int start = 0;
        int sum = 0;

        int minLen = INT_MAX;
        int ans = INT_MAX;

        vector<int> best(n, INT_MAX);

        for (int end = 0; end < n; end++) {
            sum += arr[end];

            // Shrink the window if sum becomes greater than target
            while (sum > target && start <= end) {
                sum -= arr[start];
                start++;
            }

            // Found a subarray with sum = target
            if (sum == target) {
                int curLen = end - start + 1;

                minLen = min(minLen, curLen);

                // Check if there is a non-overlapping previous subarray
                if (start > 0 && best[start - 1] != INT_MAX) {
                    ans = min(ans, curLen + best[start - 1]);
                }
            }

            // Best subarray ending at or before 'end'
            best[end] = minLen;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};