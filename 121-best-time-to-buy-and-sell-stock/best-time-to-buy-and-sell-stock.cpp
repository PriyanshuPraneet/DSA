class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minn = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<minn) minn = prices[i];
            int profit = prices[i] - minn;
            maxProfit = max(profit,maxProfit);
        }
        return maxProfit;
    }
};