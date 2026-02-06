class Solution {
public:
    void getParanthesis(vector<string>& ans,string temp,int n,int o,int c){
        if(temp.length()==2*n){
            ans.push_back(temp);
            return;
        }
        if(o<n){
            temp.push_back('(');
            getParanthesis(ans,temp,n,o+1,c);
            temp.pop_back();
        }
        if(c<o){
            temp.push_back(')');
            getParanthesis(ans,temp,n,o,c+1);
            temp.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "(";
        getParanthesis(ans,temp,n,1,0);
        return ans;
    }
};