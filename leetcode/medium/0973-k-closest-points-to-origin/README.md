# K Closest Points to Origin

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of `points` where `points[i] = [xi, yi]` represents a point on the  **X-Y**  plane and an integer `k`, return the `k` closest points to the origin `(0, 0)`.

The distance between two points on the  **X-Y**  plane is the Euclidean distance (i.e., `√(x1 - x2)2 + (y1 - y2)2`).

You may return the answer in  **any order**. The answer is  **guaranteed**  to be  **unique**  (except for the order that it is in).

 

 **Example 1:** 

```
Input: points = [[1,3],[-2,2]], k = 1
Output: [[-2,2]]
Explanation:
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest k = 1 points from the origin, so the answer is just [[-2,2]].

```

 **Example 2:** 

```
Input: points = [[3,3],[5,-1],[-2,4]], k = 2
Output: [[3,3],[-2,4]]
Explanation: The answer [[-2,4],[3,3]] would also be accepted.

```

 

 **Constraints:** 

- 1 <= k <= points.length <= 104
- -104 <= xi, yi <= 104

## Solution

**Language:** C++  
**Runtime:** 58 ms (beats 46.52%)  
**Memory:** 77.3 MB (beats 36.07%)  
**Submitted:** 2026-10-24T14:11:59.992Z  

```cpp
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>, greater<pair<int,pair<int,int>>>>> pq;

        using myPair=pair<long long,pair<int,int>>;
        priority_queue<myPair,vector<myPair>,greater<myPair>> pq;

        for(auto it : points){
            long long x=it[0];
            long long y=it[1];
            // long long res=sqrt((x*x)+(y*y));
            long long res=(x*x)+(y*y);

            pq.push({res,{it[0],it[1]}});
        }

        int i=0;
        vector<vector<int>> result;
        while(i<k){
            int m=pq.top().second.first;
            int n=pq.top().second.second;
            result.push_back({m,n});
            pq.pop();
            i++;
        }
        return result;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/k-closest-points-to-origin/)