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