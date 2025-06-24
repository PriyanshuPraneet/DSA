class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0;
        int maxFreq = 0;
        int l = 0;
        int r = 0;
        vector<int> hashMap(26,0);
        while(r<s.length()){
            hashMap[s[r] - 'A']++;
            maxFreq = max(maxFreq, hashMap[s[r]-'A']);
            if((r-l+1)-maxFreq > k){
                hashMap[s[l]-'A']--;
                maxFreq=0;
                l++;
            }
            if((r-l+1)-maxFreq <= k){
                maxLen = max(maxLen, (r-l+1));
            }
            r++;
        }
        return maxLen;
    }
};