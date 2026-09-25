class Solution {
  public:
    void selectionSort(vector<int> &nums) {
        // code here
        int n=nums.size();
        for(int i=0;i<n;i++){
            int minInd=i;
            for(int j=i;j<n;j++){
                if(nums[minInd]>nums[j]){
                    minInd=j;
                }
            }
            
            swap(nums[i],nums[minInd]);
        }
    }
};