class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(auto it : nums){
            hashSet.insert({it});
        }
        int missingInt=INT_MAX;

        int n=nums.size();
        int preSum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                preSum += nums[i];
            }else{
                break;
            }
        }

        while(hashSet.find(preSum) != hashSet.end()){
            preSum++;
        }

        return preSum;
    }
};