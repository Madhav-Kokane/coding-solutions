class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        long long temp=0;
        for(int i=0;i<n;i++){
            temp=(temp*10)+num[i];
        }

        temp+=k;

        string str=to_string(temp);
        vector<int> result;
        for(int i=0;i<str.length();i++){
            result.push_back(str[i]-'0');
        }
        return result;
    }
};