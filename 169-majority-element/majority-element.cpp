class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int i=0;
        int el;
        el = nums[i];
        while(i<nums.size()){
            if(el==nums[i]) count++;
            else count--;
            if(count==0){
                count=1;
                el=nums[i];
            }
            i++;
        }
        return el;
    }
};