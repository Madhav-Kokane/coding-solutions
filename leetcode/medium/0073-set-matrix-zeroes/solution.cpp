class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        stack<pair<int,int>> st;
        int rows=matrix.size();
        int cols=matrix[0].size();

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j] == 0){
                    st.push({i,j});
                }
            }
        }

        while(!st.empty()){
            int r=st.top().first;
            int c=st.top().second;
            st.pop();

            for(int i=0;i<rows;i++){
                matrix[i][c]=0;
            }

            for(int i=0;i<cols;i++){
                matrix[r][i]=0;
            }

        }
    }
};