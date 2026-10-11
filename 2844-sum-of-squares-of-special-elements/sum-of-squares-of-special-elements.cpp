class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int i =1;
        while(i <=n){
            if(n % i == 0) sum += (nums[i-1] * nums[i-1]);
            i++;
        }
        return sum;
    }
};