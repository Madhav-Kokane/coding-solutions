class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int maxProfit=0;

        if(n==0){
            return maxProfit;
        }

        int buy=prices[0];
        for(int i=1;i<n;i++){
            int sell=prices[i];
            
            maxProfit=Math.max(maxProfit,(sell-buy));
            if(sell<buy){
                buy=sell;
            }
        }
        return maxProfit;
    }
}