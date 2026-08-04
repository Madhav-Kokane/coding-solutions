class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minElement=INT_MAX;
        for(auto it:nums){
            minElement=min(minElement,it);
        }

        int maxElement=INT_MIN;
        for(auto it:nums){
            maxElement=max(maxElement,it);
        }

        unordered_set<int> hashSet;
        for(auto it : nums){
            hashSet.insert({it});
        } 

        vector<int> result;
        for(int i=minElement;i<=maxElement;i++){
            if(!hashSet.contains(i)){
                result.push_back(i);
            }
        }

        sort(nums.begin(),nums.end());
        return result;

    }
};