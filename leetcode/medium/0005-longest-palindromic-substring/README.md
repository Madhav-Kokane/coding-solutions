# Longest Palindromic Substring

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, return  *the longest*   *palindromic*   *substring*  in `s`.

 

 **Example 1:** 

```
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

```

 **Example 2:** 

```
Input: s = "cbbd"
Output: "bb"

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consist of only digits and English letters.

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 68.37%)  
**Memory:** 9.4 MB (beats 77.61%)  
**Submitted:** 2026-08-04T11:00:44.962Z  

```cpp
class Solution {
public:
    int start=0;
    int maxLen=0;
    void expand(int left,int right,string& s){
         while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        int len = right - left - 1;

        if (len > maxLen) {
            maxLen = len;
            start = left + 1;
        }
    }
    string longestPalindrome(string s) {
        int n=s.size();

        for(int i=0;i<n;i++){
            // odd length
            expand(i,i,s);

            // even length
            expand(i,i+1,s);
        }

        return s.substr(start,maxLen);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-palindromic-substring/)