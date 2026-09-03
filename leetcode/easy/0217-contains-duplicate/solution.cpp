class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        /*
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
        */
        
        /*
        unordered_map<int,int> hashMap;
        for(int i=0;i<n;i++){
            hashMap[nums[i]]++;
        }

        for(auto & it : hashMap){
            if(it.second > 1){
                return true;
            }
        }
        return false;
        */

        unordered_set<int> st;
        for(auto it : nums){
            if(st.find(it) != st.end()){
                return true;
            }else{
                st.insert({it});
            }
        }
        return false;
    }
};