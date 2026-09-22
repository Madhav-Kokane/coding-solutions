# Combination Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of  **distinct**  integers `candidates` and a target integer `target`, return  *a list of all  **unique combinations**  of* `candidates` *where the chosen numbers sum to* `target` *.*  You may return the combinations in  **any order**.

The  **same**  number may be chosen from `candidates` an  **unlimited number of times**. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to `target` is less than `150` combinations for the given input.

 

 **Example 1:** 

```
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

```

 **Example 2:** 

```
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

```

 **Example 3:** 

```
Input: candidates = [2], target = 1
Output: []

```

 

 **Constraints:** 

- 1 <= candidates.length <= 30
- 2 <= candidates[i] <= 40
- All elements of candidates are distinct.
- 1 <= target <= 40

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 57.00%)  
**Memory:** 14.3 MB (beats 44.99%)  
**Submitted:** 2026-09-22T13:27:25.559Z  

```cpp
class Solution {
public:
    vector<vector<int>> result;
    void soln(int i, int sum, int target, vector<int>& temp,
              vector<int>& candidates) {

        if (i == candidates.size()) {
            if (sum == target) {
                result.push_back(temp);
            }
            return;
        }

        if (sum > target) {
            return;
        }

        sum += candidates[i];
        temp.push_back(candidates[i]);
        soln(i, sum, target, temp, candidates);
        sum -= candidates[i];
        temp.pop_back();
        soln(i + 1, sum, target, temp, candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> temp;
        // int sum=0;
        soln(0,0,target,temp,candidates);
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combination-sum/)