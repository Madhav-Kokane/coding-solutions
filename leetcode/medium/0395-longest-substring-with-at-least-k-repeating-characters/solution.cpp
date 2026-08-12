class Solution {
public:
    int longestSubstring(string s, int k) {

        if(s.length() < k){
            return 0;
        }
        unordered_map<char,int> hashMap;
        for(auto it:s){
            hashMap[it]++;
        }

        int n=s.length();

        for(int i=0;i<n;i++){
            if(hashMap[s[i]] < k){
                
                string left=s.substr(0,i);
                string right=s.substr(i+1);

                return max(
                    longestSubstring(left,k),
                    longestSubstring(right,k)
                );
            }
        }

        return s.length();
    }
};