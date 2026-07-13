class Solution {
public:
/*
    bool isValid(int i){
        string str=to_string(i);
        for(int i=0;i<str.length()-1;i++){
            int n1=str[i]-'0';
            int n2=str[i+1]-'0';
            if((n2-n1) != 1){
                return false;
            }
        }
        return true;
    }
*/    
    vector<int> sequentialDigits(int low, int high) {
        /*
        vector<int> result;
        for(int i=low;i<=high;i++){
            if(isValid(i)){
                result.push_back(i);
            }
        }
        return result;
        */

        string str="123456789";
        string lows=to_string(low);
        string highs=to_string(high);
        vector<int> result;
        
        for(int i=lows.size();i<=highs.size();i++){
            for(int j=0;j<=9-i;j++){
                string n=str.substr(j,i);
                int num=stoi(n);
                if(num>=low && num<=high){
                    result.push_back(num);
                }
            }
        }
        return result;
    }
};