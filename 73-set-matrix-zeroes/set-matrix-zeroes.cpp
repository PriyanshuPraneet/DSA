class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> rowArray(col,1);
        vector<int> colArray(row,1);
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    rowArray[j] = 0;
                    colArray[i] = 0;
                }
            }
        }
        for(int i=0; i<col; i++){
            if(rowArray[i]==0){
                for(int j=0; j<row; j++){
                    matrix[j][i] = 0;
                }
            }
        }
        for(int i=0; i<row; i++){
            if(colArray[i]==0){
                for(int j=0; j<col; j++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};