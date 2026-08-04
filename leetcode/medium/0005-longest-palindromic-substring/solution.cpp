class Solution {
public:
    int start=0;
    int maxLen=0;
    void expand(int left,int right,string& s){
         while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        int len = right - left - 1;

        if (len > maxLen) {
            maxLen = len;
            start = left + 1;
        }
    }
    string longestPalindrome(string s) {
        int n=s.size();

        for(int i=0;i<n;i++){
            // odd length
            expand(i,i,s);

            // even length
            expand(i,i+1,s);
        }

        return s.substr(start,maxLen);
    }
};