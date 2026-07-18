class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.length();
        int n=t.length();

        unordered_map<char,int> hashT;
        unordered_map<char,int> hashS;
        for(auto& it: t){
            hashT[it]++;
        }

        int required=hashT.size();
        int formed=0;
        int left=0;
        int minLen=INT_MAX;
        int start=0;

        for(int right=0;right<m;right++){
            char c=s[right];
            hashS[c]++;

            if(hashT.count(c) && hashS[c]==hashT[c]){
                formed++;
            }

            while(formed == required){
                if(right-left+1 < minLen){
                    minLen=(right-left+1);
                    start=left;
                }

                char ch=s[left];
                hashS[ch]--;

                if(hashT.count(ch) && hashS[ch] < hashT[ch]){
                    formed--;
                }

                left++;
            }
        }

        if(minLen==INT_MAX){
            return "";
        }

        return s.substr(start,minLen);
        
    }
};