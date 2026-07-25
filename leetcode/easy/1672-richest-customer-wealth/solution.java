class Solution {
    public int maximumWealth(int[][] accounts) {
       int maxVal=Integer.MIN_VALUE;
       int rows=accounts.length;
       int cols=accounts[0].length;
       for(int i=0;i<rows;i++){
            int sum=0;
            for(int j=0;j<cols;j++){
                sum += accounts[i][j];
            }
            maxVal=Math.max(maxVal,sum);
       }
       return maxVal;
    }
}