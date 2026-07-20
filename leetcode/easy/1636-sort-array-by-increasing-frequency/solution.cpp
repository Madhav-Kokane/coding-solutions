class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        int n=nums.size();
        for(auto& it:nums){
            hashMap[it]++;
        }

        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(hashMap[a] == hashMap[b]){
                return a>b;
            }

            return hashMap[a]<hashMap[b];
            
        });

        return nums;
    }
};