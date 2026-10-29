class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hashMap;
        int count=0;
        int preSum=0;
        hashMap[0]=1;

        for(auto it : nums){
            preSum=preSum+it;
            int required=preSum-k;

            if(hashMap.find(required) != hashMap.end()){
                count+= hashMap[required];
            }

            hashMap[preSum]++;
        }
        return count;
    }
};