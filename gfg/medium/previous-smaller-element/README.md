# Previous Smaller Element

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array  **arr[ ]**.  The task is to find Previous Smaller Element (PSE) for every element in the array. The Previous Smaller Element (PSE) of an element  **x**  is the first element that appears to the left of  **x**  in the array and is strictly smaller than  **x**.

 **Note:**  If no such element exists, assign  **-1**  as the PSE for that position.

 **Examples:** 

```
Input: arr[] = [1, 6, 2]
Output: [-1, 1, 1]
Explanation:
For 1, there is no element on the left, so answer is -1.
For 6, previous smaller element is 1.
For 2, previous smaller element is 1.
```

```
Input: arr[] = [1, 5, 0, 3, 4, 5]
Output: [-1, 1, -1, 0, 3, 4]
Explanation:
For 1, no element on the left, so answer is -1.
For 5, previous smaller element is 1.
For 0, no element on the left smaller than 0, so answer is -1.
For 3, previous smaller element is 0.
For 4, previous smaller element is 3.
For 5, previous smaller element is 4.
```

 **Constraints:** 
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T05:24:16.157Z  

```cpp
class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int> st;
        vector<int> result;
        
        // map<int,int> mp;
        for(auto it : arr){
            while(!st.empty() && st.top()>=it){
                st.pop();
            }
            if(st.empty()){
                // mp[it] = -1;
                result.push_back(-1);
            }else{
                // mp[it] = st.top();
                result.push_back(st.top());
            }
            
            st.push(it);
        }
        
        return result;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/previous-smaller-element/1)