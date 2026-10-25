class Solution {
  public:
    void recSoln(int i,string str,string& s,vector<string>& result){
        if(i==s.length()){
            result.push_back(str);
            return;
        }
        
        str.push_back(s[i]);
        recSoln(i+1,str,s,result);
        str.pop_back();
        recSoln(i+1,str,s,result);
    }
    vector<string> powerSet(string &s) {
        vector<string> result;
        string str="";
        
        recSoln(0,str,s,result);
        sort(result.begin(),result.end());
        return result;
        
    }
};