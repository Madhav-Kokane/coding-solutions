class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(auto it:nums){
            hashSet.insert({it});
        }

        int maxNum=INT_MIN;
        int minNum=INT_MAX;

        for(int i=0;i<nums.size();i++){
            maxNum=max(maxNum,nums[i]);
            minNum=min(minNum,nums[i]);
        }

        for(int i=1;i<=maxNum;i++){
            if(hashSet.find(i) == hashSet.end()){
                return i;
            }
        }

        if(maxNum<0){
            return 1;
        }
        return maxNum+1;
    }
};