# Reverse String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

 

 **Example 1:** 

```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

```

 **Example 2:** 

```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is a printable ascii character.

## Solution

**Language:** Java  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 48.1 MB (beats 74.48%)  
**Submitted:** 2026-08-21T06:50:54.806Z  

```java
class Solution {
    public void reverseString(char[] s) {
        int i=0;
        int j=s.length-1;

        while(i<j){
            char ch=s[i];
            s[i]=s[j];
            s[j]=ch;
            i++;
            j--;
        }
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string/)