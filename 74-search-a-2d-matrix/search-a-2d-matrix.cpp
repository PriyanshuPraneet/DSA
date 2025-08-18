class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int beg = 0;
        int end = (row * col) - 1;
        while(beg<=end){
            int mid = (beg+end)/2;
            int rowIdx = mid/col;
            int colIdx = mid%col;
            if(matrix[rowIdx][colIdx] == target) return true;
            else if(matrix[rowIdx][colIdx] > target) end = mid-1;
            else beg = mid+1; 
        }
        return false;
    }
};