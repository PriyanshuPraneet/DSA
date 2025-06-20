class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int sub = target - nums[i];
            if(mpp.find(sub) != mpp.end()){
                result.push_back(mpp[sub]);
                result.push_back(i);
            }
            mpp[nums[i]] = i;
        }
        return result;
    }
};