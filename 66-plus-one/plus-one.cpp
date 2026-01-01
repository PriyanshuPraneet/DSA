class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int carry = 0;
        int num = digits[n-1] + 1;
        carry = num/10;
        ans.push_back(num%10);
        for(int i = n-2; i>=0; i--){
            num = digits[i] + carry;
            carry = num/10;
            ans.push_back(num%10);
        }
        if(carry!=0) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};