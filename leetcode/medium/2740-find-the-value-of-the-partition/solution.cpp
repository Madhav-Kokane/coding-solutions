class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n=nums.size();
        int minValue=INT_MAX;
/*
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int temp=abs(nums[i]-nums[j]);
                minValue=min(minValue,temp);
            }
        }
        return minValue;

*/
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<n;i++){
            minValue=min(minValue,nums[i]-nums[i-1]);
        }

        return minValue;
    }
};