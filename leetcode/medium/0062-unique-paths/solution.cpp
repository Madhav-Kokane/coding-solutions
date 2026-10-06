class Solution {
public:
    int recSoln(int i , int j, int row, int col){
        if(i==row-1 && j==col-1){
            return 1;
        }

        if(i>=row || j>=col){
            return 0;
        }

        int right=recSoln(i,j+1,row,col);
        int down=recSoln(i+1,j,row,col);
        int ans=right+down;
        return ans;
        
    }

    int memoizedSoln(int i,int j,int row,int col,vector<vector<int>>& temp){
        if(i==row-1 && j==col-1){
            return 1;
        }

        if(i>=row || j>=col){
            return 0;
        }

        if(temp[i][j] != -1){
            return temp[i][j];
        }

        int right=memoizedSoln(i,j+1,row,col,temp);
        int down=memoizedSoln(i+1,j,row,col,temp);
        temp[i][j]=right+down;
        return temp[i][j];
    }
    int uniquePaths(int m, int n) {
        // return recSoln(0,0,m,n);
        vector<vector<int>> temp(m,vector<int>(n,-1));
        return memoizedSoln(0,0,m,n,temp);
    }
};