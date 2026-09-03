class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it : nums){
            st.insert({it});
        }

        int n=nums.size();
        for(int i=0;i<=n;i++){
            if(st.find(i) == st.end()){
                return i;
            }
        }
        return -1;
    }
};