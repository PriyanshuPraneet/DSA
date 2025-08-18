class Solution {
public:
    void function(double x, long long n, double& ans){
        if(n<=0) return;
        function(x,n/2,ans);
        ans *= ans;
        if(n%2){
            ans = ans*x;
        }
    }
    double myPow(double x, int n) {
        double ans = 1;
        long long nn = n;
        if(nn<0){
            function(1/x, -nn, ans);
        }
        else function(x,nn,ans);
        return ans;
    }
};