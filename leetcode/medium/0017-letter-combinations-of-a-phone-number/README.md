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
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.4 MB (beats 41.41%)  
**Submitted:** 2026-09-22T13:01:53.900Z  

```cpp
class Solution {
public:
    void soln(int i,int n,string digits,vector<string>& result,string str,map<char,string>& mapping){

        if(i == n){
            result.push_back(str);
            return;
        }

        char ch=digits[i];
        for(auto chars : mapping[ch]){
            str.push_back(chars);
            soln(i+1,n,digits,result,str,mapping);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        int n=digits.length();
        vector<string> result;
        if(n==0){
            return result;
        }
        map<char,string> mapping;
        mapping['2']="abc";
        mapping['3']="def";
        mapping['4']="ghi";
        mapping['5']="jkl";
        mapping['6']="mno";
        mapping['7']="pqrs";
        mapping['8']="tuv";
        mapping['9']="wxyz";

        string str="";
        soln(0,n,digits,result,str,mapping);
        return result;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)