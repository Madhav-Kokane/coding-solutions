class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int largestSum=INT_MIN;
        int sum=0;
        for(auto it : nums){
            sum+=it;
            largestSum=max(largestSum,sum);

            if(sum<0){
                sum=0;
            }
        }

        return largestSum;
    }
};