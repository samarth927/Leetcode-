class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalsum = n*(n+1)/2;
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum = sum + nums[j];
        }
        int missing = totalsum - sum;
        return missing; 
    }
};