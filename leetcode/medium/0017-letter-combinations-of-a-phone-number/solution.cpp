class Solution {
public:
    void soln(int i,int n,string digits,vector<string>& result,string str,map<char,string>& mapping){

        if(i == n){
            result.push_back(str);
            return;
        }

        char ch=digits[i];
        for(auto chars : mapping[ch]){
            str.push_back(chars);
            soln(i+1,n,digits,result,str,mapping);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        int n=digits.length();
        vector<string> result;
        if(n==0){
            return result;
        }
        map<char,string> mapping;
        mapping['2']="abc";
        mapping['3']="def";
        mapping['4']="ghi";
        mapping['5']="jkl";
        mapping['6']="mno";
        mapping['7']="pqrs";
        mapping['8']="tuv";
        mapping['9']="wxyz";

        string str="";
        soln(0,n,digits,result,str,mapping);
        return result;

    }
};