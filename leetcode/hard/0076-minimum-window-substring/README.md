# Minimum Window Substring

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two strings `s` and `t` of lengths `m` and `n` respectively, return  *the  **minimum window***   ***substring**  **of  *`s`*  such that every character in  *`t`*  (** including duplicates**) is included in the window *. If there is no such substring, return* the empty string *`""`.

The testcases will be generated such that the answer is  **unique**.

 

 **Example 1:** 

```
Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.

```

 **Example 2:** 

```
Input: s = "a", t = "a"
Output: "a"
Explanation: The entire string s is the minimum window.

```

 **Example 3:** 

```
Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empty string.

```

 

 **Constraints:** 

- m == s.length
- n == t.length
- 1 <= m, n <= 105
- s and t consist of uppercase and lowercase English letters.

 

 **Follow up:**  Could you find an algorithm that runs in `O(m + n)` time?

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 64.82%)  
**Memory:** 11.6 MB (beats 43.50%)  
**Submitted:** 2026-07-18T07:28:26.738Z  

```cpp
class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.length();
        int n=t.length();

        unordered_map<char,int> hashT;
        unordered_map<char,int> hashS;
        for(auto& it: t){
            hashT[it]++;
        }

        int required=hashT.size();
        int formed=0;
        int left=0;
        int minLen=INT_MAX;
        int start=0;

        for(int right=0;right<m;right++){
            char c=s[right];
            hashS[c]++;

            if(hashT.count(c) && hashS[c]==hashT[c]){
                formed++;
            }

            while(formed == required){
                if(right-left+1 < minLen){
                    minLen=(right-left+1);
                    start=left;
                }

                char ch=s[left];
                hashS[ch]--;

                if(hashT.count(ch) && hashS[ch] < hashT[ch]){
                    formed--;
                }

                left++;
            }
        }

        if(minLen==INT_MAX){
            return "";
        }

        return s.substr(start,minLen);
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-window-substring/)