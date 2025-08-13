class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> rowMatrix(cols,-1);
        vector<int> colMatrix(rows, -1);
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j] == 0){
                    rowMatrix[j] = 0;
                    colMatrix[i] = 0;
                }
            }
        }
        for(int i=0; i<cols; i++){
            if(rowMatrix[i] == 0){
                for(int j=0; j<rows; j++){
                    matrix[j][i] = 0;
                }
            }
        }
        for(int i=0; i<rows; i++){
            if(colMatrix[i] == 0){
                for(int j=0; j<cols; j++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};