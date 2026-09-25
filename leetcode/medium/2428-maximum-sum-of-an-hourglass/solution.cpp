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