class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        if(arr[n-1]<=target){
            return n;
        }
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]<=target){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return start;
    }
};
