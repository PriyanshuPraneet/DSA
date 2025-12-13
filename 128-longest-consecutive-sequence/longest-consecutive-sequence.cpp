class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int len = 0;
        int maxLen = 0;
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1]==1) len++;
            else if(nums[i]==nums[i-1]) continue;
            else{
                len = 0;
            }
            maxLen = max(len,maxLen);
        }
        return maxLen+1;
    }
};