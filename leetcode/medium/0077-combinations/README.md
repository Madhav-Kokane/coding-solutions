# Combinations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integers `n` and `k`, return  *all possible combinations of*  `k`  *numbers chosen from the range*  `[1, n]`.

You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
Explanation: There are 4 choose 2 = 6 total combinations.
Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.

```

 **Example 2:** 

```
Input: n = 1, k = 1
Output: [[1]]
Explanation: There is 1 choose 1 = 1 total combination.

```

 

 **Constraints:** 

- 1 <= n <= 20
- 1 <= k <= n

## Solution

**Language:** C++  
**Runtime:** 112 ms (beats 12.03%)  
**Memory:** 131.3 MB (beats 12.68%)  
**Submitted:** 2026-09-22T13:49:46.574Z  

```cpp
class Solution {
public:
    vector<vector<int>> result;
    void soln(int i,int n,int k,vector<int>& temp){
        if(temp.size() == k){
            result.push_back(temp);
            return;
        }

        if(i>n){
            return;
        }

        temp.push_back(i);
        soln(i+1,n,k,temp);
        temp.pop_back();
        soln(i+1,n,k,temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        soln(1,n,k,temp);
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combinations/)