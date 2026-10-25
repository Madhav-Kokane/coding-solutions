# Letter Combinations of a Phone Number

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. Return the answer in  **any order**.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

 

 **Example 1:** 

```
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

```

 **Example 2:** 

```
Input: digits = "2"
Output: ["a","b","c"]

```

 

 **Constraints:** 

- 1 <= digits.length <= 4
- digits[i] is a digit in the range ['2', '9'].

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 21.97%)  
**Memory:** 9.4 MB (beats 25.69%)  
**Submitted:** 2026-10-25T07:11:42.710Z  

```cpp
class Solution {
public:
    void solve(int ind,string digits,string& str,vector<string>& ans,map<char,string>& mp){
        if(ind==digits.size()){
            ans.push_back(str);
            return;
        }

        string letter=mp[digits[ind]];
        for(auto ch : letter){
            str.push_back(ch);
            solve(ind+1,digits,str,ans,mp);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";

        vector<string> ans;
        string temp="";
        solve(0,digits,temp,ans,mp);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)