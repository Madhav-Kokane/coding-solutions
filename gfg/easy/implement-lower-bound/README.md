# Implement Lower Bound

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a sorted array  **arr[]** (following 0-based indexing) and a number  **target**, find the lower bound of the target in this given array.

- The lower bound of a number is defined as the smallest index in the sorted array where the element is greater than or equal to the given number.
- If all the elements in the given array are smaller than the target, the lower bound will be the length of the array. 

 **Examples :** 

```
Input:  arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9
Output: 3
Explanation: 3 is the smallest index in arr[] where element (arr[3] = 10) is greater than or equal to 9.
```

```
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 11
Output: 4
Explanation: 4 is the smallest index in arr[] where element (arr[4] = 11) is greater than or equal to 11.

```

```
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 100
Output: 7
Explanation: As no element in arr[] is greater than 100, return the length of array.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T08:37:37.212Z  

```cpp
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        if(arr[n-1] < target){
            return n;
        }
        
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]>=target){
                end=mid;
            }else{
                start=mid+1;
            }
        }
        return start;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/implement-lower-bound/1)