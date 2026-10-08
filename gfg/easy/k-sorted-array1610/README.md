# Check k Sorted

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of  **n**  distinct elements. Check whether the given array is a k-sorted array or not. A k-sorted array is an array where each element is at most k distance away from its target position in the sorted array. 

 **Examples** 

```
Input: arr[] = {3, 2, 1, 5, 6, 4}, k = 2
Output: true
Explanation: Every element is at most 2 distance away from its target position in the sorted array.  

```

```
Input: arr[] = {13, 8, 10, 7, 15, 14, 12}, k = 1
Output: false

```

 **Constraints:** 
1 ≤ n ≤ 105
0 ≤ k < n

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T09:44:12.522Z  

```cpp
class Solution {
  public:
    bool isKSortedArray(vector<int>& arr, int k) {
        unordered_map<int,int> hashMap;
        
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<temp.size();i++){
            hashMap[temp[i]]=i;
        }
        
        for(int i=0;i<arr.size();i++){
            int sortLoc=hashMap[arr[i]];
            if(abs(i-sortLoc)>k){
                return false;
            }
        }
        return true;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/k-sorted-array1610/1)