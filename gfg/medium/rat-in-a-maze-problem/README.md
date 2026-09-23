# Rat in a Maze

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary matrix  **maze[][]**  of size **n × n**  containing values  **0**  and  **1**, find all possible paths for a rat to travel from the source cell (0, 0) to the destination cell (n - 1, n - 1). The rat can move in four directions: up(U), down(D), left(L), and right(R).

- 1 represents an open cell through which the rat can move.
- 0 represents a blocked cell that cannot be traversed.

The rat can move only through open cells and cannot visit the same cell more than once in a path. Return all valid paths as strings consisting of 'U', 'D', 'L', and 'R', representing the sequence of moves taken by the rat.

 **Note:**  Return the paths in lexicographically increasing order. If no valid path exists, return an empty list.

 **Examples:** 

```
Input: maze[][] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}}
Output: ["DDRDRR", "DRDDRR"]
Explanation: There are two valid paths from the source cell (0, 0) to the destination cell (3, 3).

```

```
Input: maze[][] = [[1, 0], [1, 0]]
Output: []
Explanation: No path exists as the destination cell (1, 1) is blocked.

```

 **Constraints:** 
2 ≤ n ≤ 5
0 ≤ maze[i][j] ≤ 1

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T06:36:43.217Z  

```cpp
class Solution {
  public:
    vector<string> result;
    
    void soln(int i,int j,int m,int n,vector<vector<int>>& maze,string str,vector<vector<int>>& visited){
        if(i==m-1 && j==n-1){
            result.push_back(str);
            return;
        }
        
        visited[i][j] = 1;
        if(j+1<n && maze[i][j+1] == 1 && visited[i][j+1]==0){
            str.push_back('R');
            soln(i,j+1,m,n,maze,str,visited);
            str.pop_back();
        }
        
        if(i+1<m && maze[i+1][j] == 1 && visited[i+1][j]==0){
            str.push_back('D');
            soln(i+1,j,m,n,maze,str,visited);
            str.pop_back();
        }
        
        if(i-1>=0 && maze[i-1][j] == 1 && visited[i-1][j ]==0){
            str.push_back('U');
            soln(i-1,j,m,n,maze,str,visited);
            str.pop_back();
        }
        
        if(j-1>=0 && maze[i][j-1]== 1 && visited[i][j-1]==0){
            str.push_back('L');
            soln(i,j-1,m,n,maze,str,visited);
            str.pop_back();
        }
        
        visited[i][j] = 0;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int m=maze.size();
        int n=maze[0].size();
        
        if(maze[0][0] == 0){
            return result;
        }
        string str="";
        vector<vector<int>> visited(m,vector<int>(n,0));
        soln(0,0,m,n,maze,str,visited);
        sort(result.begin(),result.end());
        return result;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1)