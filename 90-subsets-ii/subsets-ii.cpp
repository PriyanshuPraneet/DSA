class Solution {
public:
    void getSubset(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx)
    {
        ans.push_back(temp);
        for(int i=idx; i<nums.size(); i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            getSubset(nums,temp,ans,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> ans;
        getSubset(nums,temp,ans,0);
        return ans;
    }
};