# Count the Number of Consistent Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `allowed` consisting of  **distinct**  characters and an array of strings `words`. A string is  **consistent** if all characters in the string appear in the string `allowed`.

Return *the number of  **consistent**  strings in the array* `words`.

 

 **Example 1:** 

```
Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.

```

 **Example 2:** 

```
Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
Output: 7
Explanation: All strings are consistent.

```

 **Example 3:** 

```
Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
Output: 4
Explanation: Strings "cc", "acd", "ac", and "d" are consistent.

```

 

 **Constraints:** 

- 1 <= words.length <= 104
- 1 <= allowed.length <= 26
- 1 <= words[i].length <= 10
- The characters in allowed are distinct.
- words[i] and allowed contain only lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 49 ms (beats 36.13%)  
**Memory:** 34.2 MB (beats 9.83%)  
**Submitted:** 2026-07-11T09:04:38.981Z  

```cpp
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> hashSet;
        for(auto& it : allowed){
            hashSet.insert({it});
        }

        int n=words.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            bool allow=true;
            for(auto& it : words[i]){
                if(!hashSet.contains(it)){
                    allow=false;
                    break;
                }
            }
            if(allow){
                cnt++;
            }
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-the-number-of-consistent-strings/)