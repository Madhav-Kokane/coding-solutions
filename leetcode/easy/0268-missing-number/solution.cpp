class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*
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
        */

        int n=nums.size();
        vector<bool> present(n+1,false);
        for(auto it : nums){
            present[it]=true;
        }

        for(int i=0;i<present.size();i++){
            if(present[i] == false){
                return i;
            }
        }
        return -1;
    }
};