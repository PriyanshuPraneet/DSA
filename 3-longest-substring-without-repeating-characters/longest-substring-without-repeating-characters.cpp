class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int len = 0;
        int maxLen = 1;
        if(s.length() == 0) return 0;
        int l = 0;
        int r = 0;
        while(r<s.length()){
            if(mpp.find(s[r]) != mpp.end() && l<=mpp[s[r]]){
                l = mpp[s[r]]+1;
            }
            mpp[s[r]] = r;
            len = r-l+1;
            maxLen = max(maxLen,len);
            r++;
        }
        return maxLen;
    }
};