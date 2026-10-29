class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int left=0;
        int right=0;
        int sum=0;
        while(right-left<k){
            sum+=arr[right];
            right++;
        }
        int maxSum=INT_MIN;
        maxSum=max(maxSum,sum);
        int n=arr.size();
        while(right<n){
            sum -= arr[left];
            sum+=arr[right];
            maxSum=max(maxSum,sum);
            left++;
            right++;
        }
        return maxSum;
    }
};