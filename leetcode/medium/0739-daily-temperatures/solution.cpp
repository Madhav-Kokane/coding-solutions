class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<pair<int,int>> st;
        vector<int> result(n);
        

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[i]>=st.top().first){
                st.pop();
            }

            if(st.empty()){
                result[i]=0;
            }else{
                int k=st.top().second;
                result[i]=k-i;
            }

            st.push({temperatures[i],i});
        }
        return result;
    }
};