# Smallest Palindromic Rearrangement I

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a  **palindromic**  string `s`.

Return the  **lexicographically smallest**  palindromic permutation of `s`.

 

 **Example 1:** 

 **Input:**  s = "z"

 **Output:**  "z"

 **Explanation:** 

A string of only one character is already the lexicographically smallest palindrome.

 **Example 2:** 

 **Input:**  s = "babab"

 **Output:**  "abbba"

 **Explanation:** 

Rearranging `"babab"` → `"abbba"` gives the smallest lexicographic palindrome.

 **Example 3:** 

 **Input:**  s = "daccad"

 **Output:**  "acddca"

 **Explanation:** 

Rearranging `"daccad"` → `"acddca"` gives the smallest lexicographic palindrome.

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of lowercase English letters.
- s is guaranteed to be palindromic.

## Solution

**Language:** C++  
**Runtime:** 68 ms (beats 43.52%)  
**Memory:** 54 MB (beats 98.46%)  
**Submitted:** 2026-07-28T08:36:50.104Z  

```cpp
class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        int mid=n/2;

        sort(s.begin(),s.begin()+mid);
        
        for(int i=0;i<mid;i++){
            s[n-1-i]=s[i];
        }
        return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-palindromic-rearrangement-i/)