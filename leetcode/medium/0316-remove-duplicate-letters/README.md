# Remove Duplicate Letters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, remove duplicate letters so that every letter appears once and only once. You must make sure your result is  **the smallest in lexicographical order**  among all possible results.

 

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

- 1 <= s.length <= 104
- s consists of lowercase English letters.

 

 **Note:**  This question is the same as 1081: https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.6 MB (beats 41.15%)  
**Submitted:** 2026-07-19T05:36:07.708Z  

```cpp
class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        vector<int> lastOccur(26,-1);
        for(int i=n-1;i>=0;i--){
            char ch=s[i];
            if(lastOccur[ch-'a'] == -1){
                lastOccur[ch-'a']=i;
            }
        }


        vector<bool> visited(26,false);
        string ans="";
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];

            if(visited[ch-'a']){
                continue;
            }

            while(!st.empty() && st.top()>ch && lastOccur[st.top()-'a']>i){
                visited[st.top()-'a'] = false;
                st.pop();
            }

            st.push(ch);
            visited[ch-'a']=true;
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/remove-duplicate-letters/)