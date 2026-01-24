class Solution {
public:
    bool isPalindrome(string s, int idx, int i){
        while(idx<=i){
            if(s[idx]!=s[i]) return false;
            idx++;
            i--;
        }
        return true;
    }
    void getPartition(string s, vector<vector<string>>& ans, vector<string>& temp, int idx)
    {
        if(idx==s.length()){
            ans.push_back(temp);
            return;
        }
        for(int i=idx; i<s.length(); i++){
            if(isPalindrome(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                getPartition(s,ans,temp,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        getPartition(s,ans,temp,0);
        return ans;
    }
};