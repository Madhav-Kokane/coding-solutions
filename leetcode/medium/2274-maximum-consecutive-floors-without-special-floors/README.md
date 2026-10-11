# Maximum Consecutive Floors Without Special Floors

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Alice manages a company and has rented some floors of a building as office space. Alice has decided some of these floors should be  **special floors**, used for relaxation only.

You are given two integers `bottom` and `top`, which denote that Alice has rented all the floors from `bottom` to `top` (**inclusive**). You are also given the integer array `special`, where `special[i]` denotes a special floor that Alice has designated for relaxation.

Return  *the  **maximum**  number of consecutive floors without a special floor*.

 

 **Example 1:** 

```
Input: bottom = 2, top = 9, special = [4,6]
Output: 3
Explanation: The following are the ranges (inclusive) of consecutive floors without a special floor:
- (2, 3) with a total amount of 2 floors.
- (5, 5) with a total amount of 1 floor.
- (7, 9) with a total amount of 3 floors.
Therefore, we return the maximum number which is 3 floors.

```

 **Example 2:** 

```
Input: bottom = 6, top = 8, special = [7,6,8]
Output: 0
Explanation: Every floor rented is a special floor, so we return 0.

```

 

 **Constraints:** 

- 1 <= special.length <= 105
- 1 <= bottom <= special[i] <= top <= 109
- All the values of special are unique.

## Solution

**Language:** C++  
**Runtime:** 31 ms (beats 56.67%)  
**Memory:** 61.9 MB (beats 26.70%)  
**Submitted:** 2026-10-11T06:56:20.035Z  

```cpp
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        /*
        unordered_set<int> hashSet;
        for(auto it : special){
            hashSet.insert({it});
        }

        int maxCon=0;
        int count=0;

        for(int i=bottom;i<=top;i++){
            if(hashSet.find(i)!=hashSet.end()){
                count=0;
            }else{
                count++;
                maxCon=max(maxCon,count);
            }
        }
        return maxCon;
        */

        sort(special.begin(),special.end());
        int maxAns=0;
        maxAns=max(maxAns,special[0]-bottom);

        int n=special.size();
        for(int i=1;i<n;i++){
            maxAns=max(maxAns,special[i]-special[i-1]-1);
        }

        maxAns=max(maxAns,abs(top-special[n-1]));
        return maxAns;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-consecutive-floors-without-special-floors/)