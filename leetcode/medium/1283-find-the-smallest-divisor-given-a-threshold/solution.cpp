class Solution {
public:
    int maxElement(vector<int>& nums){
        int maxEle=INT_MIN;
        for(auto it : nums){
            maxEle=max(maxEle,it);
        }
        return maxEle;
    }

    long long sumDiv(vector<int>& nums,int divisor){
        long long sum=0;
        for(auto it : nums){
            sum += ceil(double(it)/double(divisor));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int end=maxElement(nums);
        int ans=end;

        while(start<=end){
            int mid=start+(end-start)/2;
            long long divSum=sumDiv(nums,mid);

            if(divSum<=threshold){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;

    }
};