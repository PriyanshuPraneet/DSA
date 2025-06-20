class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        prefix[0] = 1;
        int pre = 1;
        for(int i=0; i<nums.size(); i++){
            prefix[i] = pre;
            pre = pre*nums[i];
        }
        int suff = 1;
        for(int i=nums.size()-1; i>=0; i--){
            prefix[i] = suff*prefix[i];
            suff = suff * nums[i];
        }
        return prefix;
    }
};