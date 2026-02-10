class Solution {
public:
    void getCombinationSum(vector<int>& candidates,int target,vector<vector<int>>& ans,
    vector<int> temp,int idx){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=idx; i<candidates.size(); i++){
            if(candidates[i]>target) break;
            if(i!=idx && candidates[i]==candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            getCombinationSum(candidates,target-candidates[i],ans,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        getCombinationSum(candidates,target,ans,temp,0);
        return ans;
    }
};