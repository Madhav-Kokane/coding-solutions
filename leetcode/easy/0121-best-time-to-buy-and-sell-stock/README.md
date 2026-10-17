# Best Time to Buy and Sell Stock

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

You want to maximize your profit by choosing a  **single day**  to buy one stock and choosing a  **different day in the future**  to sell that stock.

Return  *the maximum profit you can achieve from this transaction*. If you cannot achieve any profit, return `0`.

 

 **Example 1:** 

```
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

```

 **Example 2:** 

```
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

```

 

 **Constraints:** 

- 1 <= prices.length <= 105
- 0 <= prices[i] <= 104

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 47.75%)  
**Memory:** 94 MB (beats 92.78%)  
**Submitted:** 2026-10-17T08:53:42.285Z  

```java
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
```

---

[View on LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)