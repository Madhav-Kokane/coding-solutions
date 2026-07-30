class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        if(n<9){
            return n;
        }

        int minLength=0;
        int op=1;
        while(n>0){
            if(op==1){
                if(n>=8){
                    minLength += 8;
                    n-=8;
                    op++;
                }else{
                    minLength += (n*op);
                    n=0;
                }
            }else if(op==2){
                if(n>=8){
                    minLength += (op*8);
                    n -= 8;
                    op++;
                }else{
                    minLength += (n*op);
                    n=0;
                }
            }else if(op==3){
                if(n>=8){
                    minLength += (op*8);
                    n -= 8;
                    op++;
                }else{
                    minLength += (n*op);
                    n=0;
                }
            }else if(op==4){
                minLength += (n*op);
                n=n-n;
            }
        }
        return minLength;
    }
};