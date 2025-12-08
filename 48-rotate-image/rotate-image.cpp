class Solution {
public:
    void getRotated(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                int t = (n-1) - (i+j);
                swap(matrix[i][j], matrix[i+t][j+t]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        getRotated(matrix);
    }
};