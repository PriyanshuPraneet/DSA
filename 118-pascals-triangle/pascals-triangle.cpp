class Solution {
public:
    long long combination(int n, int r) {
    long long result = 1;
    for (int i = 1; i <= r; i++) {
        result = result * (n - r + i) / i;
    }
    return result;
}

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; i++){
            vector<int> row;
            for(int j=0; j<=i; j++){
                long long val = combination(i,j);
                row.push_back(val);
            }
            ans.push_back(row);
        }
        return ans;
    }
};