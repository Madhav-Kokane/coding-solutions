class Solution {
public:
    string toBinary(int n){
        if(n==0){
            return "0";
        }

        string binary="";
        while(n>0){
            if(n%2 ==0){
                binary += '0';
            }else{
                binary += '1';
            }
            n=n/2;
        }

        reverse(binary.begin(),binary.end());
        return binary;
    }
    bool consecutiveSetBits(int n) {
        string str=toBinary(n);
        int cnt=0;
        for(int i=1;i<str.size();i++){
            if(str[i]=='1' && str[i-1]=='1'){
                cnt++;;
            }
        }
        return cnt==1;
    }
};