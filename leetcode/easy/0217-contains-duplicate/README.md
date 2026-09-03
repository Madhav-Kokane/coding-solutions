# Contains Duplicate

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, return `true` if any value appears  **at least twice**  in the array, and return `false` if every element is distinct.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3,1]

 **Output:**  true

 **Explanation:** 

The element 1 occurs at the indices 0 and 3.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  false

 **Explanation:** 

All elements are distinct.

 **Example 3:** 

 **Input:**  nums = [1,1,1,3,3,4,3,2,4,2]

 **Output:**  true

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 79 ms (beats 28.62%)  
**Memory:** 111.3 MB (beats 62.92%)  
**Submitted:** 2026-09-03T09:18:47.111Z  

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        /*
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
        */
        
        /*
        unordered_map<int,int> hashMap;
        for(int i=0;i<n;i++){
            hashMap[nums[i]]++;
        }

        for(auto & it : hashMap){
            if(it.second > 1){
                return true;
            }
        }
        return false;
        */

        unordered_set<int> st;
        for(auto it : nums){
            if(st.find(it) != st.end()){
                return true;
            }else{
                st.insert({it});
            }
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/contains-duplicate/)