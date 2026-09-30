class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        long long mid=start+(end-start)/2;
        while(start<=end){
            long long midSquare=(mid*mid);

            if(midSquare == x){
                return (int)mid;
            }else if(midSquare < x){
                start=mid+1;
            }else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return end;
    }
};