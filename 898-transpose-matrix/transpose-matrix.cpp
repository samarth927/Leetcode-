class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> res(m, vector<int>(n));
        for(int i = 0; i < m; i++) { // column
            for(int j = 0; j < n; j++) { // row
                res[i][j] = matrix[j][i];
            }
        }
        return res;
    }
};