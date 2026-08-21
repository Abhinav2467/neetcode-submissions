class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=prices.size()-1;
        int buy=INT_MAX;
        int profit=INT_MIN;
        for (auto i:prices){
            buy=min(buy,i);
            profit=max(profit,i-buy);
        }
        return profit;
    }
};
