# Find K Pairs with Smallest Sums

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two integer arrays `nums1` and `nums2` sorted in  **non-decreasing order**  and an integer `k`.

Define a pair `(u, v)` which consists of one element from the first array and one element from the second array.

Return  *the*  `k`  *pairs*  `(u1, v1), (u2, v2),..., (uk, vk)`  *with the smallest sums*.

 

 **Example 1:** 

```
Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3
Output: [[1,2],[1,4],[1,6]]
Explanation: The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]

```

 **Example 2:** 

```
Input: nums1 = [1,1,2], nums2 = [1,2,3], k = 2
Output: [[1,1],[1,1]]
Explanation: The first 2 pairs are returned from the sequence: [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]

```

 

 **Constraints:** 

- 1 <= nums1.length, nums2.length <= 105
- -109 <= nums1[i], nums2[i] <= 109
- nums1 and nums2 both are sorted in non-decreasing order.
- 1 <= k <= 104
- k <= nums1.length * nums2.length

## Solution

**Language:** C++  
**Runtime:** 94 ms (beats 30.51%)  
**Memory:** 157.6 MB (beats 55.71%)  
**Submitted:** 2026-10-09T07:10:16.110Z  

```cpp
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
                                       int k) {
        //  priority_queue<pair<int,pair<int,int>> ,
        //  vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>
        //  minHeap;

        priority_queue<pair<int, pair<int, int>>> maxHeap;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                int sum = nums1[i] + nums2[j];
                // minHeap.push({sum,{nums1[i],nums2[j]}});

                if(maxHeap.size() < k){
                    maxHeap.push({sum,{nums1[i],nums2[j]}});
                }else if(maxHeap.top().first > sum){
                    maxHeap.pop();
                    maxHeap.push({sum,{nums1[i],nums2[j]}});
                }else{
                    break;
                }

            }
        }
        
                vector<vector<int>> result;
                while(!maxHeap.empty()){
                    auto temp=maxHeap.top().second;
                    int val1=temp.first;
                    int val2=temp.second;
                    maxHeap.pop();
                    result.push_back({val1,val2});
                    
                }
                return result;
            
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/)