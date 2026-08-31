class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num] = mp[num] + 1;
        }
        for (auto entry : mp) {
            if (entry.second > n / 2) {
                return entry.first;
            }
        }
        return -1;
    }
};
