class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;

        for (int num : nums) {
            st.insert(num);
        }

        int multiple = k;

        while (true) {
            if (st.find(multiple) == st.end()) {
                return multiple;
            }
            multiple += k;
        }
    }
};