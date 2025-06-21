class Solution {
public:
    int findMin(vector<int>& nums) {
        int beg = 0;
        int end = nums.size()-1;
        int minimum = INT_MAX;
        while(beg<=end){
            int mid = (beg+end)/2;
            if(nums[mid]>=nums[beg]){
                minimum = min(minimum, nums[beg]);
                beg = mid+1;
            }
            else {
                minimum = min(minimum, nums[mid]);
                end = mid-1;
            }
        }
        return minimum;
    }
};