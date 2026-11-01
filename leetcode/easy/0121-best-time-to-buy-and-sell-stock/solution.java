class Solution {
    public int maxProfit(int[] prices) {
        int maxValue=Integer.MIN_VALUE;
        int n=prices.length;

        int buy=prices[0];
        for(int i=0;i<n;i++){
            int profit=prices[i]-buy;
            maxValue=Math.max(maxValue,profit);

            if(prices[i]<buy){
                buy=prices[i];
            }
        }
        return maxValue;
    }
}