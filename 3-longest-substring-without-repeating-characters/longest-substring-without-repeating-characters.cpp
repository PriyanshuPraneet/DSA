class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int len = 0;
        int maxLen = 1;
        if(s.length() == 0) return 0;
        int l = 0;
        int r = 0;
        //mpp[s[l]]++;
        while(l<=r && r<s.length()){
            if(mpp.find(s[r]) == mpp.end()){
                len = (r-l)+1;
                maxLen = max(maxLen,len);
                mpp[s[r]]++;
                r++;
            }
            else{
                while(mpp.find(s[r]) != mpp.end() && l<=r){
                    mpp.erase(s[l]);
                    l++;
                }
            }
        }
        return maxLen;
    }
};