class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int count = 0;
        int i=0;
        while(i < nums.size()){
            if(count == 0){
                count = 1;
                el = nums[i];
            }
            else if(el == nums[i]){
                count++;
            }
            else count--;
            i++;
        }
        return el;
    }
};