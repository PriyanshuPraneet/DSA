class Solution {
public:
    double getAns(double x, long long n){
        if(n<=0) return 1;
        double ans = getAns(x,n/2);
        ans = ans * ans;
        if(n%2==1) ans = x * ans;
        return ans;
    }
    double myPow(double x, int n) {
        long long N = n;
        if(N<0) N = N * -1;
        double ans = getAns(x,N);
        if(n<0) return 1/ans;
        return ans;
    }
};