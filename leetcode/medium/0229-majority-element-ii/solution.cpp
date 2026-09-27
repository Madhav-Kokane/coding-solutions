class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int,int> hashMap;
        for(auto it : nums){
            hashMap[it]++;
        }

        int req=n/3;
        vector<int> result;
        for(auto it : hashMap){
            if(it.second > req){
                result.push_back(it.first);
            }
        }
        return result;
    }
};