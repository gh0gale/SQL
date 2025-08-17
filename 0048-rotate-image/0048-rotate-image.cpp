class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        
        int top = 0;
        int bottom = n - 1;

        while (top < bottom) {
            for (int col = 0; col < n; col++) {
                swap(matrix[top][col],matrix[bottom][col]);
            }
            top++;
            bottom--;
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};