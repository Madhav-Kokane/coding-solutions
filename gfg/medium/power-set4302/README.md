# All Subsequences of String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string  **s**, generate all possible subsequences of the string (including the empty subsequence) and return them in lexicographical order.

A subsequence is obtained by deleting zero or more characters from the string without changing the relative order of the remaining characters.

 **Examples:** 

```
Input : s = "abc"
Output: ["", "a", "ab", "abc", "ac", "b", "bc", "c"]
Explanation: There are a total of 8 non-empty subsequences for the given string. 
```

```
Input: s = "aa"
Output: ["", "a", "a", "aa"]
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T12:38:16.838Z  

```cpp
class Solution {
  public:
    void soln(int i,int n,string& s,vector<string>& result,string str){
        if(i==n){
            result.push_back(str);
            return;
        }
        
        str.push_back(s[i]);
        soln(i+1,n,s,result,str);
        str.pop_back();
        soln(i+1,n,s,result,str);
    }
    vector<string> powerSet(string &s) {
        // Code here
        string str="";
        int n=s.length();
        vector<string> result;
        soln(0,n,s,result,str);
        sort(result.begin(),result.end());
        return result;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/power-set4302/1)