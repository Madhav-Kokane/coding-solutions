class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        vector<int> lTor;
        for(auto it : nums){
            lTor.push_back(sum);
            sum+=it;
        }

        sum=0;
        vector<int> rTol(n);
        for(int i=n-1;i>=0;i--){
            rTol[i]=sum;
            sum+=nums[i];
        }

        for(int i=0;i<n;i++){
            if(lTor[i] == rTol[i]){
                return i;
            }
        }
        return -1;
    }
};