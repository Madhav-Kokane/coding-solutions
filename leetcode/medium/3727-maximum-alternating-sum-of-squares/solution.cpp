class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=(nums[i]*nums[i]);
        }

        sort(nums.begin(),nums.end());
         
        int start=0;
        int end=n-1;
        long long ans=0;
        while(start<end){
            ans += (nums[end]-nums[start]);
            start++;
            end--;
        }

        if(n%2 != 0){
            ans=ans+nums[start];
        }
        return ans;
    }
};