# Implement Upper Bound

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a  **sorted** array  **arr[]** and a number  **target**, the task is to find the  **upper**  bound of the  **target**  in this given array.
The  **upper bound**  of a number is defined as the smallest  **index**  in the sorted array where the element is greater than the given number.

 **Note:**  If all the elements in the given array are smaller than or equal to the  **target**, the upper bound will be the length of the array.

 **Examples :** 

```
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9
Output: 3
Explanation: 3 is the smallest index in arr[], at which element (arr[3] = 10) is larger than 9.
```

```
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 11
Output: 6
Explanation: 6 is the smallest index in arr[], at which element (arr[6] = 25) is larger than 11.

```

```
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 100
Output: 7
Explanation: As no element in arr[] is greater than 100, return the length of array.
```

 **Constraints:** 
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106
1 ≤ target ≤ 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T08:43:19.326Z  

```cpp
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        if(arr[n-1]<=target){
            return n;
        }
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]<=target){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return start;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/implement-upper-bound/1)