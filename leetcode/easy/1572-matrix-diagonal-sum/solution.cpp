class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rowSize=mat.size();
        int colSize=mat[0].size();

        int sum=0;
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(i==j || i+j==(rowSize-1)){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};