class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        int profit=0;
        int buy=prices[0];
        for(int i=1;i<n;i++){
            int sell=prices[i];
            int profit=0;
            if(sell>buy){
                profit=sell-buy;
            }
            maxProfit=max(maxProfit,profit);

            if(sell<buy){
                buy=sell;
            }
        }
        return maxProfit;
    }
};