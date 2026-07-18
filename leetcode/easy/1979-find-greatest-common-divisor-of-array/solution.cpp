class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int maxNo=INT_MIN;
        int minNo=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maxNo=max(maxNo,nums[i]);
            minNo=min(minNo,nums[i]);
        }
        return gcd(maxNo,minNo);
    }
};