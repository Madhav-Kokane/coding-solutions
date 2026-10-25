class Solution {
public:
    void solve(int ind,string digits,string& str,vector<string>& ans,map<char,string>& mp){
        if(ind==digits.size()){
            ans.push_back(str);
            return;
        }

        string letter=mp[digits[ind]];
        for(auto ch : letter){
            str.push_back(ch);
            solve(ind+1,digits,str,ans,mp);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";

        vector<string> ans;
        string temp="";
        solve(0,digits,temp,ans,mp);
        return ans;
    }
};