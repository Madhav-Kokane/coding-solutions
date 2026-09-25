# Maximum Sum of an Hourglass

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` integer matrix `grid`.

We define an  **hourglass**  as a part of the matrix with the following form:

Return  *the  **maximum**  sum of the elements of an hourglass*.

 **Note**  that an hourglass cannot be rotated and must be entirely contained within the matrix.

 

 **Example 1:** 

```
Input: grid = [[6,2,1,3],[4,2,1,5],[9,2,8,7],[4,1,2,9]]
Output: 30
Explanation: The cells shown above represent the hourglass with the maximum sum: 6 + 2 + 1 + 2 + 9 + 2 + 8 = 30.

```

 **Example 2:** 

```
Input: grid = [[1,2,3],[4,5,6],[7,8,9]]
Output: 35
Explanation: There is only one hourglass in the matrix, with the sum: 1 + 2 + 3 + 5 + 7 + 8 + 9 = 35.

```

 

 **Constraints:** 

- m == grid.length
- n == grid[i].length
- 3 <= m, n <= 150
- 0 <= grid[i][j] <= 106

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 17.1 MB (beats 20.40%)  
**Submitted:** 2026-09-25T10:27:39.275Z  

```cpp
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();

        int maxSum=INT_MIN;
        for(int i=0;(i+2)<rows;i++){
            for(int j=0;(j+2)<cols;j++){

                int sum=0;
                for(int m=i;m<=(i+2);m++){
                    for(int n=j;n<=(j+2);n++){
                        if(m==(i+1) && n==j){

                        }else if(m==(i+1) && n==j+2){

                        }else{
                            sum+=grid[m][n];
                        }
                    }
                }

                maxSum=max(maxSum,sum);
            }
        }
        return maxSum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-sum-of-an-hourglass/)