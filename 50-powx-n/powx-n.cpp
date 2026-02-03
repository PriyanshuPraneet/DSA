class Solution {
public:
    void getAns(double x, long long n, double& ans){
        if(n<=0){
            ans = 1;
            return;
        }
        if(n%2==0){
            getAns(x,n/2,ans);
            ans = ans * ans;
        }
        else{
            getAns(x,n-1,ans);
            ans = x * ans;
        }
    }
    double myPow(double x, int N) {
        long long n = N;
        double ans = 1;
        if(n<0){
            n = n * -1;
            getAns(x,n,ans);
            return 1/ans;
        }
        getAns(x,n,ans);
        return ans;
    }
};