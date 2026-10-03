class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashMap;
        int n=nums.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            int remain=target-nums[i];
            if(hashMap.find(remain) != hashMap.end()){
                result.push_back(hashMap[remain]);
                result.push_back(i);
                return result;
            }else{
                hashMap[nums[i]]=i;
            }
        }
        return result;
    }
};