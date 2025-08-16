class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size() * grid.size();
        vector<int> count(n+1,0);
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid.size(); j++){
                count[grid[i][j]]++;
            }
        }
        int missing, repeating;
        for(int i=1; i<count.size(); i++){
            if(count[i] == 0) missing = i;
            if(count[i]==2) repeating = i;
        }
        return {repeating,missing};
    }
};