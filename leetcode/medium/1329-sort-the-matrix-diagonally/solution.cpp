class Solution {
public:
     void sortDiag(int i,int j,vector<vector<int>>& mat){
        int row=mat.size();
        int col=mat[0].size();
        int m=i;
        int n=j;
        vector<int> temp;
        while(i<row && j<col){
            temp.push_back(mat[i][j]);
            i++;
            j++;
        }

        sort(temp.begin(),temp.end());
        int k=0;
        while(m<row && n<col){
            mat[m][n]=temp[k++];
            m++;
            n++;
        }

    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();

        for(int i=0;i<row;i++){
            sortDiag(i,0,mat);
        }

        for(int j=0;j<col;j++){
            sortDiag(0,j,mat);
        }
        
        return mat;
    }
};