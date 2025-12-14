class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int len = 1;
        int maxLen = 1;
        int left = 0;
        int right = 0;
        if(s.length()==0) return 0;
        while(right<s.length()){
            if(mpp.find(s[right])!=mpp.end() && left<=mpp[s[right]]){
                left = mpp[s[right]]+1;
            }
            mpp[s[right]] = right;
            len = right-left+1;
            maxLen = max(maxLen,len);
            right++;
        }
        return maxLen;
    }
};