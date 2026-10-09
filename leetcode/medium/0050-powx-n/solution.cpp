class Solution {
public:
    double recSoln(double x,int N){
        if(N == 0){
            return 1;
        }

        double half=recSoln(x,N/2);

        if(N%2 == 0){
            return half*half;
        } 

        return x*half*half;
    }
    double myPow(double x, int n) {
        if(x==1){
            return x;
        }


        int N=n;
        if(N<0){
            return 1/recSoln(x,N);
        }
        return recSoln(x,N);
    }
};