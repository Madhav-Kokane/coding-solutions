class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int> st;
        vector<int> result;
        
        // map<int,int> mp;
        for(auto it : arr){
            while(!st.empty() && st.top()>=it){
                st.pop();
            }
            if(st.empty()){
                // mp[it] = -1;
                result.push_back(-1);
            }else{
                // mp[it] = st.top();
                result.push_back(st.top());
            }
            
            st.push(it);
        }
        
        return result;
    }
};