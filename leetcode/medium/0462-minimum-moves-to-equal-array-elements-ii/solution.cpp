class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        int mid=0;
        if(n%2 == 0){
            int i=n/2;
            mid=(nums[i]+nums[i-1]) / 2;
        }else{
            mid=(nums[n/2]);
        }

        int ans=0;
        for(auto it : nums){
            ans+= abs(mid-it);
        }

        return ans;
    }
};