class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sSize=s.length();
        int tSize=t.length();

        int back=0;
        for(int i=0;i<tSize;i++){
            if(back<sSize && s[back] == t[i]){
                back++;
            }
        }
        
        if(back>=sSize){
            return true;
        }
        return false;
    }
};