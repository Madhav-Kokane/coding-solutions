class Solution {
  public:
    void buildStr(int i,int n,string str,string& s,vector<string>& result){
        if(i==n){
            result.push_back(str);
            return;
        }
        
        str.push_back(s[i]);
        buildStr(i+1,n,str,s,result);
        str.pop_back();
        buildStr(i+1,n,str,s,result);
    }
    vector<string> powerSet(string &s) {
        // Code here
        int n=s.size();
        vector<string> result;
        string str="";
        
        buildStr(0,n,str,s,result);
        sort(result.begin(),result.end());
        return result;
    }
};