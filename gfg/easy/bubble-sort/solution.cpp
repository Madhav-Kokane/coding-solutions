class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                if((j+1)<n && arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
};