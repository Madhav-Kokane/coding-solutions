# DI String Match

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A permutation `perm` of `n + 1` integers of all the integers in the range `[0, n]` can be represented as a string `s` of length `n` where:

- s[i] == 'I' if perm[i] < perm[i + 1], and
- s[i] == 'D' if perm[i] > perm[i + 1].

Given a string `s`, reconstruct the permutation `perm` and return it. If there are multiple valid permutations perm, return  **any of them**.

 

 **Example 1:** 

```
Input: s = "IDID"
Output: [0,4,1,3,2]

```

 **Example 2:** 

```
Input: s = "III"
Output: [0,1,2,3]

```

 **Example 3:** 

```
Input: s = "DDI"
Output: [3,2,0,1]

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is either 'I' or 'D'.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.9 MB (beats 9.12%)  
**Submitted:** 2026-07-22T07:25:29.644Z  

```cpp
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        vector<int> nums;
        int left=0;
        int right=n;

        for(auto ch : s){
            if(ch=='I'){
                nums.push_back(left);
                left++;
            }else{
                nums.push_back(right);
                right--;
            }
        }
        nums.push_back(right);
        return nums;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/di-string-match/)