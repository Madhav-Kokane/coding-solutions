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
**Submitted:** 2026-10-25T06:41:17.351Z  

```cpp
class Solution {
  public:
    void recSoln(int i,string str,string& s,vector<string>& result){
        if(i==s.length()){
            result.push_back(str);
            return;
        }
        
        str.push_back(s[i]);
        recSoln(i+1,str,s,result);
        str.pop_back();
        recSoln(i+1,str,s,result);
    }
    vector<string> powerSet(string &s) {
        vector<string> result;
        string str="";
        
        recSoln(0,str,s,result);
        sort(result.begin(),result.end());
        return result;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/power-set4302/1)