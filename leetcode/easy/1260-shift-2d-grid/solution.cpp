class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(k==0){
            return grid;
        }
        int m=grid.size();
        int n=grid[0].size();
        
        while(k>0){
            int temp=grid[m-1][n-1];
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    int temp2=grid[i][j];
                    grid[i][j]=temp;
                    temp=temp2;
                }
            }
            k--;
        }
        return grid;
    }
    
};