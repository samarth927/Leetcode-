class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            mx = max(mx, nums[i]);
        }
        int moves =0;
        for(int i=0;i<n;i++){
            moves += (mx - nums[i]);
        }
        return moves;
    }
};