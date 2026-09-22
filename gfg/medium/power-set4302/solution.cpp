class Solution {
  public:
    void soln(int i,int n,string& s,vector<string>& result,string str){
        if(i==n){
            result.push_back(str);
            return;
        }
        
        str.push_back(s[i]);
        soln(i+1,n,s,result,str);
        str.pop_back();
        soln(i+1,n,s,result,str);
    }
    vector<string> powerSet(string &s) {
        // Code here
        string str="";
        int n=s.length();
        vector<string> result;
        soln(0,n,s,result,str);
        sort(result.begin(),result.end());
        return result;
    }
};