// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
         ios_base::sync_with_stdio(false);
        int Profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                Profit+=(prices[i]-prices[i-1]);
            }
        }
        return Profit;
    }
};
