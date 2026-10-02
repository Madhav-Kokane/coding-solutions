# Sum of Subarray Minimums

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers arr, find the sum of `min(b)`, where `b` ranges over every (contiguous) subarray of `arr`. Since the answer may be large, return the answer  **modulo**  `109 + 7`.

 

 **Example 1:** 

```
Input: arr = [3,1,2,4]
Output: 17
Explanation: 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.

```

 **Example 2:** 

```
Input: arr = [11,81,94,43,3]
Output: 444

```

 

 **Constraints:** 

- 1 <= arr.length <= 3 * 104
- 1 <= arr[i] <= 3 * 104

## Solution

**Language:** C++  
**Runtime:** 56 ms (beats 85.67%)  
**Memory:** 193.5 MB (beats 54.29%)  
**Submitted:** 2026-10-02T05:52:42.443Z  

```cpp
class Solution {
public:
    vector<int> PSE(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> result(n, -1);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                result[i] = st.top();
            }

            st.push(i);
        }

        return result;
    }

    vector<int> NSE(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> result(n, n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                result[i] = st.top();
            }

            st.push(i);
        }

        return result;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int mod=(int)1e9 + 7;
        long long total=0;
        vector<int> nse=NSE(arr);
        vector<int> pse=PSE(arr);

        for(int i=0;i<arr.size();i++){
            long long left=i-pse[i];
            long long right=nse[i]-i;

            total = (total + (left * right % mod) * arr[i]) % mod;
        }
        return total;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sum-of-subarray-minimums/)