# Add to Array-Form of Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

The  **array-form**  of an integer `num` is an array representing its digits in left to right order.

- For example, for num = 1321, the array form is [1,3,2,1].

Given `num`, the  **array-form**  of an integer, and an integer `k`, return  *the  **array-form**  of the integer*  `num + k`.

 

 **Example 1:** 

```
Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234

```

 **Example 2:** 

```
Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455

```

 **Example 3:** 

```
Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021

```

 

 **Constraints:** 

- 1 <= num.length <= 104
- 0 <= num[i] <= 9
- num does not contain any leading zeros except for the zero itself.
- 1 <= k <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.3 MB  
**Submitted:** 2026-09-23T07:22:31.802Z  

```cpp
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        long long temp=0;
        for(int i=0;i<n;i++){
            temp=(temp*10)+num[i];
        }

        temp+=k;

        string str=to_string(temp);
        vector<int> result;
        for(int i=0;i<str.length();i++){
            result.push_back(str[i]-'0');
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/add-to-array-form-of-integer/)