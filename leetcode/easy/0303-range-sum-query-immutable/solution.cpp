class NumArray {
public:
    vector<int> preSum;
    NumArray(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            preSum.push_back(sum+nums[i]);
            sum+=nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        
        if(left==0){
            return preSum[right];
        }else{
            return preSum[right]-preSum[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */