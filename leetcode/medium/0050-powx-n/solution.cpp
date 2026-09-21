class Solution {
public:
    double recSoln(double x,long long n){
        if(n == 0){
            return 1;
        }
        
        double half=recSoln(x,n/2);

        if(n%2 == 0){
            return half * half;
        }

        return x*half*half;


    }
    double myPow(double x, int n) {
        double ans=1;

        long long N=n;

        if(n<0){
            return 1/recSoln(x,-N);
        }
        return recSoln(x,N);
    }
};