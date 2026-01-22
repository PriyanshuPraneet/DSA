class Solution {
public:
    void getCombination(vector<int>& candidates, int target, vector<int>& temp,
    vector<vector<int>>& ans, int i){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int j = i; j<candidates.size(); j++){
            if(candidates[j]>target) break;
            if(j>i && candidates[j]==candidates[j-1]) continue;
            temp.push_back(candidates[j]);
            getCombination(candidates,target-candidates[j],temp,ans,j+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        getCombination(candidates,target,temp,ans,0);
        return ans;
    }
};