class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        // transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        // swap
        for(int i=0;i<n;i++){
            int j =0;
            int k =n-1;
            while(j < k){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                j++;
                k--;
            }
        }

    }
};