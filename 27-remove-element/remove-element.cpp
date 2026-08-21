class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i =0;
        int j = n-1;
        while (i < j){
            if (nums[i] == val && nums[j] != val ){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
            else if (nums[i] != val)i++;
            else j--;
        }
        int count = 0;
        for (int i =0; i<n;i++){
            if(nums [i] != val) count++;
        }
        return count;
    }
};