# Daily Temperatures

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `temperatures` represents the daily temperatures, return  *an array*  `answer`  *such that*  `answer[i]`  *is the number of days you have to wait after the*  `ith`  *day to get a warmer temperature*. If there is no future day for which this is possible, keep `answer[i] == 0` instead.

 

 **Example 1:** 

```
Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

```

 **Example 2:** 

```
Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]

```

 **Example 3:** 

```
Input: temperatures = [30,60,90]
Output: [1,1,0]

```

 

 **Constraints:** 

- 1 <= temperatures.length <= 105
- 30 <= temperatures[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 30 ms (beats 23.42%)  
**Memory:** 102.9 MB (beats 64.10%)  
**Submitted:** 2026-07-10T08:53:06.740Z  

```cpp
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<pair<int,int>> st;
        vector<int> result(n);
        

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[i]>=st.top().first){
                st.pop();
            }

            if(st.empty()){
                result[i]=0;
            }else{
                int k=st.top().second;
                result[i]=k-i;
            }

            st.push({temperatures[i],i});
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/daily-temperatures/)