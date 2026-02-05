class Solution {
public:
    void getValidString(int n, vector<string>& ans, string temp){
        if(temp.length() == n){
            ans.push_back(temp);
            return;
        }
        if(temp.empty() || temp.back() != '0'){ 
            temp.push_back('0');
            getValidString(n,ans,temp);
            temp.pop_back();
        }
        temp.push_back('1');
        getValidString(n,ans,temp);
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string temp = "";
        getValidString(n,ans,temp);
        return ans;
    }
};