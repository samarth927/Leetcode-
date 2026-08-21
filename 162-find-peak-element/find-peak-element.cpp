class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) 
        {return 0;
        }
        if( n ==2){
            if(nums[1] > nums[0]) return 1;
            else
             return 0;
        }
        for(int i=1;i<n-1;i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) return i;
            else if(nums[i] > nums[i-1] && nums[i] < nums[i+1]) continue;
            else if(nums[i] < nums[i-1] && nums[i] > nums[i+1]) return i-1;
        }
        return n-1;
    }
};