class Solution {
public:
    string reverseParentheses(string s) {
        // stack<char> st;
        // string result="";
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         st.push(s[i]);
        //     }
        //     else if(s[i]==')'){
        //         string temp="";
        //         while(!st.empty() && st.top() != '('){
        //             temp.push_back(st.top());
        //             st.pop();
        //         }
        //         st.pop();
        //         // reverse(temp.begin(),temp.end());

        //         for(int j=0;j<temp.size();j++){
        //             st.push(temp[j]);
        //         }
        //     }
        //     else{
        //         st.push(s[i]);
        //     }
        // }
        stack<char> st;
        string result="";
        
            for(int i=0;i<s.size();i++)
            {
                string temp="";
                if(s[i] == '('){
                    st.push(s[i]);
                }
                else if(s[i] == ')'){
                    while(!st.empty() && st.top() != '('){
                        temp.push_back(st.top());
                        st.pop();
                    }
                    st.pop();
                    // reverse(temp.begin(),temp.end());

                    for(int j=0;j<temp.size();j++){
                        st.push(temp[j]);
                    }
                }
                else{
                    st.push(s[i]);
                }
            }
        
            while(!st.empty()){
                result.push_back(st.top());
                st.pop();
            }
            reverse(result.begin(),result.end());
            return result;

        
    }
};