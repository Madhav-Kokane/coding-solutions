# Diagonal Traverse

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` matrix `mat`, return  *an array of all the elements of the array in a diagonal order*.

 

 **Example 1:** 

```
Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,4,7,5,3,6,8,9]

```

 **Example 2:** 

```
Input: mat = [[1,2],[3,4]]
Output: [1,2,3,4]

```

 

 **Constraints:** 

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 104
- 1 <= m * n <= 104
- -105 <= mat[i][j] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 22.3 MB (beats 90.76%)  
**Submitted:** 2026-09-25T10:05:07.203Z  

```cpp
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> result(m*n,0);

        int row=0,col=0;
        for(int i=0;i<(m*n);i++){

            result[i]=mat[row][col];
            if((row+col)%2 == 0){
                if(col==n-1){
                    row++;
                }else if(row==0){
                    col++;
                }else{
                    col++;
                    row--;
                }
            }else{
                if(row==m-1){
                    col++;
                }else if(col==0){
                    row++;
                }else{
                    row++;
                    col--;
                }
            }
        }
            return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/diagonal-traverse/)