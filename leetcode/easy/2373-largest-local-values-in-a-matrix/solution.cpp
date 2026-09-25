class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();

        vector<vector<int>> result(rows-2,vector<int>(cols-2,0));

        for(int i=0;(i+2)<rows;i++){
            for(int j=0;(j+2)<cols;j++){
                
                int maxNum=INT_MIN;

                for(int k=i;k<=(i+2);k++){
                    for(int l=j;l<=(j+2);l++){
                        maxNum=max(maxNum,grid[k][l]);
                    }
                }

                result[i][j]=maxNum;

            }
        }
        return result;
    }
};