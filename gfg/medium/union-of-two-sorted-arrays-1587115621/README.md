# Union of 2 Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two  **sorted**  arrays  **a[]**  and  **b[]**, where each array may contain  **duplicate**  elements, the task is to return the elements in the  **union**  of the two arrays in  **sorted**  order.
Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.

 **Examples:** 

```
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: [1, 2, 3, 4, 5, 6, 7]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
```

```
Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
Output: [1, 2, 3, 4, 5]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.
```

```
Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
Output: [1, 2]
Explanation: Distinct elements including both the arrays are: 1 2.
```

 **Constraints:** 
1  ≤  a.size(), b.size()  ≤  105
-109 ≤ a[i], b[i] ≤109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-06T12:08:59.328Z  

```cpp
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> result;
        int i=0,j=0;
        int aSize=a.size();
        int bSize=b.size();
        
        while(i<aSize && j<bSize){
            if(a[i]<b[j]){
                if(result.empty() || result.back() != a[i]){
                    result.push_back(a[i]);
                }
                    i++;
            }else if(b[j]<a[i]){
                if(result.empty() || result.back() != b[j]){
                    result.push_back(b[j]);
                }
                    j++;
            }else{
                if(result.empty() || result.back() != a[i]){
                    result.push_back(a[i]);
                }
                    j++;
                    i++;
            }
        }
        
        while(i<aSize){
            if(result.empty() || result.back() != a[i]){
                result.push_back(a[i]);
            }
            i++;
        }
        
        while(j<bSize){
            if(result.empty() || result.back() != b[j]){
                result.push_back(b[j]);
            }
            j++;
        }
        return result;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)