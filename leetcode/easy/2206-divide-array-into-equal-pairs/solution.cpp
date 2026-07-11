class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> hashMap;

        for(auto& it : nums){
            hashMap[it]++;
        }

        for(auto& it : hashMap){
            if(it.second % 2 != 0){
                return false;
            }
        }
        return true;
    }
};