class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int orgSize=original.size();

        vector<vector<int>> result(m,vector<int>(n,0));
        if((orgSize) != (m*n)){
            return vector<vector<int>>(0,vector<int>(0));
        }

        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result[i][j]=original[k++];
            }
        }
        return result;
    }
};