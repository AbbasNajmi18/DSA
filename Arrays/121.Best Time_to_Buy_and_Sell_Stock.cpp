// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int maxProfit=0;
        int Currprofit=0;

        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]);
             Currprofit=prices[i]-buy;
            maxProfit=max(maxProfit,Currprofit);
        }
        return maxProfit;
    }
};
