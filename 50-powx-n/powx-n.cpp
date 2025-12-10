class Solution {
public:
    double calculatePower(double x, long long power){
        if(power<=0) return 1;
        double ans = calculatePower(x,power/2);
        ans = ans*ans;
        if(power%2 == 1){
            ans = ans*x;
        }
        return ans;
    }
    double myPow(double x, int n) {
        long long power = n;
        if(power<0){
            power = -1 * power;
        }
        double ans = calculatePower(x,power);
        if(n<0) ans = (double)1.0/(double)ans;
        return ans;
    }
};