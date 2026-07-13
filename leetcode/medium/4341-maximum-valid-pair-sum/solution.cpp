class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        // BRUTE FORCE
        /*
        int maxVal=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+k;j<n;j++){
                int temp=nums[i]+nums[j];
                maxVal=max(maxVal,temp);
            }
        }
        return maxVal;
        */

        vector<int> suffixMax(n);
        suffixMax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(nums[i],suffixMax[i+1]);
        }

        int maxVal=INT_MIN;
        for(int i=0;i+k<n;i++){
            int temp=nums[i]+suffixMax[i+k];
            maxVal=max(maxVal,temp);
        }
        return maxVal;
    }
};