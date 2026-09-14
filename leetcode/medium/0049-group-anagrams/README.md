# Group Anagrams

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of strings `strs`, group the anagrams together. You can return the answer in  **any order**.

 

 **Example 1:** 

 **Input:**  strs = ["eat","tea","tan","ate","nat","bat"]

 **Output:**  [["bat"],["nat","tan"],["ate","eat","tea"]]

 **Explanation:** 

- There is no string in strs that can be rearranged to form "bat".
- The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
- The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

 **Example 2:** 

 **Input:**  strs = [""]

 **Output:**  [[""]]

 **Example 3:** 

 **Input:**  strs = ["a"]

 **Output:**  [["a"]]

 

 **Constraints:** 

- 1 <= strs.length <= 104
- 0 <= strs[i].length <= 100
- strs[i] consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 17 ms (beats 53.09%)  
**Memory:** 26.2 MB (beats 43.75%)  
**Submitted:** 2026-09-14T09:05:59.351Z  

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashMap;
        for(auto it : strs){
            string word=it;
            sort(word.begin(),word.end());
            hashMap[word].push_back(it);
        }

        vector<vector<string>> result;
        for(auto it : hashMap){
            result.push_back(it.second);
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/group-anagrams/)