class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int low = 0; low < n; low++)
        {
            if ( nums[low]>= target)
            return low;
        }
        return n;
    }
};