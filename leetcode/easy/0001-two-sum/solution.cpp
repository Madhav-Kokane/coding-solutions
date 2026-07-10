class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashMap;
        vector<int> result;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int remain=target-nums[i];
            if(hashMap.count(remain)){
                int first=hashMap[remain];
                result.push_back(first);
                result.push_back(i);
            }else{
                hashMap.insert({nums[i],i});
            }
        }
        return result;
    }
};