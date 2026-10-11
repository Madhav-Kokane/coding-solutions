class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if((n)%(i+1)==0){
                int temp=nums[i]*nums[i];
                ans=ans+(temp);
            }
        }
        return ans;
    }
};