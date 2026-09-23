class Solution {
public:
    void solve(int ind,vector<int>& nums,vector<vector<int>>& result){
        if(ind==nums.size()){
            result.push_back(nums);
            return;
        }

        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            solve(ind+1,nums,result);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        int ind=0;
        solve(0,nums,result);
        return result;
    }
};