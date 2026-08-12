# Longest Substring with At Least K Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s` and an integer `k`, return  *the length of the longest substring of*  `s`  *such that the frequency of each character in this substring is greater than or equal to*  `k`.

if no such substring exists, return 0.

 

 **Example 1:** 

```
Input: s = "aaabb", k = 3
Output: 3
Explanation: The longest substring is "aaa", as 'a' is repeated 3 times.

```

 **Example 2:** 

```
Input: s = "ababbc", k = 2
Output: 5
Explanation: The longest substring is "ababb", as 'a' is repeated 2 times and 'b' is repeated 3 times.

```

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of only lowercase English letters.
- 1 <= k <= 105

## Solution

**Language:** C++  
**Runtime:** 326 ms (beats 12.59%)  
**Memory:** 100.5 MB (beats 5.01%)  
**Submitted:** 2026-08-12T09:59:27.637Z  

```cpp
class Solution {
public:
    int longestSubstring(string s, int k) {

        if(s.length() < k){
            return 0;
        }
        unordered_map<char,int> hashMap;
        for(auto it:s){
            hashMap[it]++;
        }

        int n=s.length();

        for(int i=0;i<n;i++){
            if(hashMap[s[i]] < k){
                
                string left=s.substr(0,i);
                string right=s.substr(i+1);

                return max(
                    longestSubstring(left,k),
                    longestSubstring(right,k)
                );
            }
        }

        return s.length();
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/)