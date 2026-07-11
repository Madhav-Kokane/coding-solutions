class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        /*
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
        */

        // Since constraints are 500 we can use frequency array
        int frequency[501]={0};
        for(int i=0;i<n;i++){
            frequency[nums[i]]++;
        }
        for(int i=1;i<=500;i++){
            if(frequency[i]%2 != 0){
                return false;
            }
        }
        return true;
    }
};