class Solution {
public:
    void getCombinations(vector<int>& nums,int target,vector<int>& temp,
    vector<vector<int>>& ans,int idx)
    {
        if(target==0){
        ans.push_back(temp);
        return;
        }
        for(int i=idx; i<nums.size(); i++){
            if(nums[i]>target) break;
            if(i!=idx && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            getCombinations(nums,target-nums[i],temp,ans,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        getCombinations(candidates,target,temp,ans,0);
        return ans;
    }
};