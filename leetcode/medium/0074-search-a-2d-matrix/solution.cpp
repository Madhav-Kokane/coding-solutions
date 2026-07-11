class Solution {
public:
    bool isPresent(vector<vector<int>>& matrix,int target,int i){
        int start=0;
        int end=matrix[0].size()-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(matrix[i][mid] < target){
                start=mid+1;
            }else if(matrix[i][mid] > target){
                end=mid-1;
            }else{
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        bool flag=false;
        for(int i=0;i<rowSize;i++){
            if(matrix[i][0]<=target && matrix[i][colSize-1]>=target){
                flag=isPresent(matrix,target,i);
                if(flag){
                    return true;
                }
            }
        }
        return false;
    }
};