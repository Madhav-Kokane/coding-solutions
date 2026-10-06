# Climbing Stairs

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

 

 **Example 1:** 

```
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

```

 **Example 2:** 

```
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

```

 

 **Constraints:** 

- 1 <= n <= 45

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 35.97%)  
**Submitted:** 2026-10-06T10:34:19.739Z  

```cpp
class Solution {
public: 
    int memoizedSoln(int n,vector<int>& temp){
        if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        if(temp[n] != -1){
            return temp[n];
        }

        return temp[n]=memoizedSoln(n-1,temp)+memoizedSoln(n-2,temp);
    }
    int climbStairs(int n) {
        /*
        if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        return climbStairs(n-1)+climbStairs(n-2);
        */
        vector<int> temp(n+1,-1);
        return memoizedSoln(n,temp);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/climbing-stairs/)