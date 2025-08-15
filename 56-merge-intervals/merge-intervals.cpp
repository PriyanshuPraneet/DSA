class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0; i<intervals.size(); i++){
            for(int j=0; j<2; j++){
                if(ans.empty() || ans.back()[1]<intervals[i][j]){
                    ans.push_back(intervals[i]);
                }
                else{
                    ans.back()[1] = max(ans.back()[1],intervals[i][1]);
                }
            }
        }
        return ans;
    }
};