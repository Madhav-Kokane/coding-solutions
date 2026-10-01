class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int> st;
        vector<int> result;
        for(auto it : asteroids){
            while(!st.empty() && it<0 && st.top()>0){
                if(st.top() < -it){
                    st.pop();
                }else if(st.top() == -it){
                    st.pop();
                    it=0;
                }else{
                    it=0;
                }
            }

            if(it != 0){
                st.push(it);
            }

        }
        // vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(),result.end());
        return result;
    }
};