class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>(9*n)){
            return -1;
        }

        string str="";
        for(int i=0;i<n;i++){
            int digit=min(9,s);
            str += digit+'0';
            s -= digit;
        }

        long long ans=stoll(str);
        return ans;
    }
};