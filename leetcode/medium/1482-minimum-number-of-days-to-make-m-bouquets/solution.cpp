class Solution {
public:
    int maxEle(vector<int>& bloomDay){
        int maxE=INT_MIN;
        for(auto it : bloomDay){
            maxE=max(maxE,it);
        }
        return maxE;
    }

    int minEle(vector<int>& bloomDay){
        int minE=INT_MAX;
        for(auto it : bloomDay){
            minE=min(minE,it);
        }
        return minE;
    }

    int helper(vector<int>& bloomDay,int mid,int k){
        int count=0;
        int nBookey=0;

        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]>mid){
                nBookey+=(count/k);
                count=0;
            }else{
                count++;
            }
        }
        nBookey+=(count/k);
        return nBookey;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start=minEle(bloomDay);
        int end=maxEle(bloomDay);
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int bookey=helper(bloomDay,mid,k);

            if(bookey>=m){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }

        }
        return ans;

    }
};