class Solution {
public:
    void soln(int i,int n,vector<int>& nums,vector<vector<int>>& result,vector<int>& sub){
        if(i==n){
            result.push_back(sub);
            return;
        }

        sub.push_back(nums[i]);
        soln(i+1,n,nums,result,sub);
        sub.pop_back();
        soln(i+1,n,nums,result,sub);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> sub;
        int n=nums.size();

        soln(0,n,nums,result,sub);
        return result;
    }
};