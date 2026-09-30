class Solution {
public:
    int maxEle(vector<int>& piles){
        int maxEle=INT_MIN;
        for(auto it : piles){
            maxEle=max(maxEle,it);
        }
        return maxEle;
    }

    long long helper(vector<int>& piles,int mid){
        long long reqHours=0;
        for(auto it : piles){
            reqHours += ceil(double(it)/double(mid));
        }
        return reqHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=maxEle(piles);
        int ans=end;//assume
        while(start<=end){
            int mid=start+(end-start)/2;
            long long totHours=helper(piles,mid);

            if(totHours>h){
                start=mid+1;
            }else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};