class Solution {
public:
    int memoizedSoln(int i,vector<int>& nums,vector<int>& temp){
        if(i<0){
            return 0;
        }

        if(i==0){
            return nums[i];
        }

        if(temp[i] != -1){
            return temp[i];
        }

        int pick=nums[i]+memoizedSoln(i-2,nums,temp);
        int notPick=memoizedSoln(i-1,nums,temp);

        temp[i]=max(pick,notPick);
        return temp[i];
    }
    int recSoln(int i,vector<int>& nums){
        if(i<0){
            return 0;
        }

        if(i==0){
            return nums[i];
        }

        int pick=nums[i]+recSoln(i-2,nums);
        int notPick=0+recSoln(i-1,nums);
        return max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        // return recSoln(n,nums);
        vector<int> temp(n+1,-1);
        return memoizedSoln(n,nums,temp);
    }
};