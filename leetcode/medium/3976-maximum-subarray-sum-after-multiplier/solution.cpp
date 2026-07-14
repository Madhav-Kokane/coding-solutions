class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int m=k;
        sort(nums.begin(),nums.end());
        long long sum1=0;
        int n=nums.size()-1;
        int i=n;

        while(i>=0 && k>0){
            // int temp=(long long)nums[i]*m;
            sum1 += (long long)nums[i]*m;
            i--;
            k--;
        }
        
        k=m;
        long long sum2=0;
        int j=0;
        while(j<=n && k>0){
            // int temp2=0;
            if(nums[j] >= 0){
                // temp2=temp2+floor((double)nums[j] / m);
                sum2 += floor((double)nums[j] / m);
            }else{
                // temp2=temp2+ceil((double)nums[j]/m);
                sum2 += ceil((double)nums[j] / m);
            }

            // sum2 += temp2;
            k--;
            j++;
        }

        return max(sum1,sum2);
    }
};