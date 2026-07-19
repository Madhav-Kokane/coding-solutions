class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        vector<int> lastOccur(26,-1);
        for(int i=n-1;i>=0;i--){
            char ch=s[i];
            if(lastOccur[ch-'a'] == -1){
                lastOccur[ch-'a']=i;
            }
        }


        vector<bool> visited(26,false);
        string ans="";
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];

            if(visited[ch-'a']){
                continue;
            }

            while(!st.empty() && st.top()>ch && lastOccur[st.top()-'a']>i){
                visited[st.top()-'a'] = false;
                st.pop();
            }

            st.push(ch);
            visited[ch-'a']=true;
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};