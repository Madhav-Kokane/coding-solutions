class Solution {
public:
    int gcd(int x,int y){
        while(y!=0){
            int rem=x%y;
            x=y;
            y=rem;
        }
        return x;
    }
    int gcdOfOddEvenSums(int n) {
        // return n;
        int sumOdd=(n*n);
        int sumEven=n*(n+1);
        if(sumOdd>sumEven){
            return gcd(sumOdd,sumEven);
        }
        return gcd(sumEven,sumOdd);
    }
};