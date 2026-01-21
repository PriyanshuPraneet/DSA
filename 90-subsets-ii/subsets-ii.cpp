class Solution {
public:
    void getSubsetsWithDup(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp,
    int idx){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        getSubsetsWithDup(nums,ans,temp,idx+1);
        temp.pop_back();
        while(idx<(nums.size()-1) && nums[idx]==nums[idx+1]) idx++;
        getSubsetsWithDup(nums,ans,temp,idx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        getSubsetsWithDup(nums,ans,temp,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};