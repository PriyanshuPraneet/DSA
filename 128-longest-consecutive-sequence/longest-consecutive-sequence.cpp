class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0 ;
        int n = nums.size();
        int longest = 0;
        int maxLength = 0;
        unordered_set<int>st;
        for(int i = 0; i<n; i++){
            st.insert(nums[i]);
        }
        for(auto it: st){
            if(st.find(it-1) == st.end()){
                int x = it;
                longest = 1;
                while(st.find(x) != st.end()){
                    longest++;
                    maxLength = max(maxLength,longest);
                    x++;
                }
            }
        }
        return maxLength-1;
    }
};