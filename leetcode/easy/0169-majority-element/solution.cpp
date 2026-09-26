class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        int n=nums.size();

        for(auto it : nums){
            hashMap[it]++;
        }

        for(auto it : nums){
            if(hashMap[it] > (n/2)){
                return it;
            }
        }

        return -1;
    }
};