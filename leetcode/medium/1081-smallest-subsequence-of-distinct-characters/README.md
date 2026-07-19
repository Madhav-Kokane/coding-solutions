# Smallest Subsequence of Distinct Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, return  *the  **lexicographically smallest*   *subsequence**  of*  `s`  *that contains all the distinct characters of*  `s`  *exactly once*.

 

 **Example 1:** 

```
Input: s = "bcabc"
Output: "abc"

```

 **Example 2:** 

```
Input: s = "cbacdcbc"
Output: "acdb"

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consists of lowercase English letters.

 

 **Note:**  This question is the same as 316: https://leetcode.com/problems/remove-duplicate-letters/

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.7 MB (beats 79.99%)  
**Submitted:** 2026-07-19T05:22:52.657Z  

```cpp
class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> lastOccurence(26, -1);
        int n = s.length();
        for (int i = n - 1; i >= 0; i--) {
            char ch = s[i];

            if (lastOccurence[ch - 'a'] == -1) {
                lastOccurence[ch - 'a'] = i;
            }
        }

        vector<bool> visited(26, false);

        string ans = "";
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (visited[c - 'a']) {
                continue;
            }

            while (!ans.empty() && ans.back() > c &&
                   lastOccurence[ans.back() - 'a'] > i)
                    {
                visited[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            visited[c - 'a'] = true;
            ans.push_back(c);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/)