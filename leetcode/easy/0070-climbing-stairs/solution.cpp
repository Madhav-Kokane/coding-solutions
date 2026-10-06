class Solution {
public: 
    int memoizedSoln(int n,vector<int>& temp){
        if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        if(temp[n] != -1){
            return temp[n];
        }

        return temp[n]=memoizedSoln(n-1,temp)+memoizedSoln(n-2,temp);
    }
    int climbStairs(int n) {
        /*
        if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        return climbStairs(n-1)+climbStairs(n-2);
        */
        vector<int> temp(n+1,-1);
        return memoizedSoln(n,temp);
    }
};