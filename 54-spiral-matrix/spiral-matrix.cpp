class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> res;

        int i = 0;
        int j = 0;

        int up = 0;
        int down = row - 1;
        int left = 0;
        int right = col - 1;

        while(up <= down && left <= right) {

            // right
            for(j = left; j <= right; j++) {
                res.push_back(matrix[up][j]);
            }
            up++;

            // down
            for(i = up; i <= down; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;

            // left
            if(up <= down) {
                for(j = right; j >= left; j--) {
                    res.push_back(matrix[down][j]);
                }
                down--;
            }

            // up
            if(left <= right) {
                for(i = down; i >= up; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return res;
    }
};