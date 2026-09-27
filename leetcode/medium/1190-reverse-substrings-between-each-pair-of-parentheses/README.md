# Reverse Substrings Between Each Pair of Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string `s` that consists of lower case English letters and brackets.

Reverse the strings in each pair of matching parentheses, starting from the innermost one.

Your result should  **not**  contain any brackets.

 

 **Example 1:** 

```
Input: s = "(abcd)"
Output: "dcba"

```

 **Example 2:** 

```
Input: s = "(u(love)i)"
Output: "iloveu"
Explanation: The substring "love" is reversed first, then the whole string is reversed.

```

 **Example 3:** 

```
Input: s = "(ed(et(oc))el)"
Output: "leetcode"
Explanation: First, we reverse the substring "oc", then "etco", and finally, the whole string.

```

 

 **Constraints:** 

- 1 <= s.length <= 2000
- s only contains lower case English characters and parentheses.
- It is guaranteed that all parentheses are balanced.

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 13.60%)  
**Memory:** 9.7 MB (beats 56.07%)  
**Submitted:** 2026-09-27T09:55:55.154Z  

```cpp
class Solution {
public:
    string reverseParentheses(string s) {
        // stack<char> st;
        // string result="";
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         st.push(s[i]);
        //     }
        //     else if(s[i]==')'){
        //         string temp="";
        //         while(!st.empty() && st.top() != '('){
        //             temp.push_back(st.top());
        //             st.pop();
        //         }
        //         st.pop();
        //         // reverse(temp.begin(),temp.end());

        //         for(int j=0;j<temp.size();j++){
        //             st.push(temp[j]);
        //         }
        //     }
        //     else{
        //         st.push(s[i]);
        //     }
        // }
        stack<char> st;
        string result="";
        
            for(int i=0;i<s.size();i++)
            {
                string temp="";
                if(s[i] == '('){
                    st.push(s[i]);
                }
                else if(s[i] == ')'){
                    while(!st.empty() && st.top() != '('){
                        temp.push_back(st.top());
                        st.pop();
                    }
                    st.pop();
                    // reverse(temp.begin(),temp.end());

                    for(int j=0;j<temp.size();j++){
                        st.push(temp[j]);
                    }
                }
                else{
                    st.push(s[i]);
                }
            }
        
            while(!st.empty()){
                result.push_back(st.top());
                st.pop();
            }
            reverse(result.begin(),result.end());
            return result;

        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/)