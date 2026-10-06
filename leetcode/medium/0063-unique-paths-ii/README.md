# Unique Paths II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` integer array `grid`. There is a robot initially located at the  **top-left corner**  (i.e., `grid[0][0]`). The robot tries to move to the  **bottom-right corner**  (i.e., `grid[m - 1][n - 1]`). The robot can only move either down or right at any point in time.

An obstacle and space are marked as `1` or `0` respectively in `grid`. A path that the robot takes cannot include  **any**  square that is an obstacle.

Return  *the number of possible unique paths that the robot can take to reach the bottom-right corner*.

The testcases are generated so that the answer will be less than or equal to `2 * 109`.

 

 **Example 1:** 

```
Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right

```

 **Example 2:** 

```
Input: obstacleGrid = [[0,1],[0,0]]
Output: 1

```

 

 **Constraints:** 

- m == obstacleGrid.length
- n == obstacleGrid[i].length
- 1 <= m, n <= 100
- obstacleGrid[i][j] is 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12 MB (beats 29.06%)  
**Submitted:** 2026-10-06T12:28:42.337Z  

```cpp
class Solution {
public:
    int recSoln(int i,int j,int row,int col,vector<vector<int>>& obstacleGrid){
        if(i>=row || j>=col || obstacleGrid[i][j]==1){
            return 0;
        }

        if(i==row-1 && j==col-1){
            return 1;
        }

        int right=recSoln(i,j+1,row,col,obstacleGrid);
        int down=recSoln(i+1,j,row,col,obstacleGrid);
        return right+down;
    }

    int memoizedSoln(int i,int j,int row,int col,vector<vector<int>>& obstacleGrid,vector<vector<int>>& temp){
        if(i>=row || j>=col || obstacleGrid[i][j]==1){
            return 0;
        }

        if(i==row-1 && j==col-1){
            return 1;
        }

        if(temp[i][j] != -1){
            return temp[i][j];
        }

        int right=memoizedSoln(i,j+1,row,col,obstacleGrid,temp);
        int down=memoizedSoln(i+1,j,row,col,obstacleGrid,temp);
        return temp[i][j]=right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row=obstacleGrid.size();
        int col=obstacleGrid[0].size();
        // return recSoln(0,0,row,col,obstacleGrid);
        vector<vector<int>> temp(row,vector<int>(col,-1));
        return memoizedSoln(0,0,row,col,obstacleGrid,temp);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/unique-paths-ii/)