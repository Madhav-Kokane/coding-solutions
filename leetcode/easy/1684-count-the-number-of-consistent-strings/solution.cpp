class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> hashSet;
        for(auto& it : allowed){
            hashSet.insert({it});
        }

        int n=words.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            bool allow=true;
            for(auto& it : words[i]){
                if(!hashSet.contains(it)){
                    allow=false;
                    break;
                }
            }
            if(allow){
                cnt++;
            }
        }
        return cnt;
    }
};