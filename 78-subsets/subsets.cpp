class Solution {
public:
    void getSubset(vector<int>& nums, vector<vector<int>>& ans, int idx, vector<int> temp){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        getSubset(nums,ans,idx+1,temp);
        temp.pop_back();
        getSubset(nums,ans,idx+1,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        getSubset(nums,ans,0,temp);
        return ans;
    }
};