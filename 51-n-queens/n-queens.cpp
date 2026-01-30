class Solution {
public:
    void solve(int n,vector<string>& board,vector<vector<string>>& ans,int col,
    vector<int>& rows, vector<int>& lowerDiagnol,vector<int>& upperDiagnol){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n; row++){
            if(rows[row]==0 && lowerDiagnol[row+col]==0 && upperDiagnol[n-1+col-row]==0){
                board[row][col] = 'Q';
                rows[row] = 1;
                lowerDiagnol[row+col]=1;
                upperDiagnol[n-1+col-row]=1;
                solve(n,board,ans,col+1,rows,lowerDiagnol,upperDiagnol);
                board[row][col]='.';
                rows[row]=0;
                lowerDiagnol[row+col]=0;
                upperDiagnol[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i] = s;
        }
        vector<int> rows(n,0), lowerDiagnol(2*n - 1,0), upperDiagnol(2*n - 1,0);
        solve(n,board,ans,0,rows,lowerDiagnol,upperDiagnol);
        return ans;
    }
};