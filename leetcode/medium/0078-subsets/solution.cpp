class Solution {
public:
    void buildSoln(int i,int n,vector<int>& temp,vector<int>& nums,vector<vector<int>>& result){
        if(i==n){
            result.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        buildSoln(i+1,n,temp,nums,result);
        temp.pop_back();
        buildSoln(i+1,n,temp,nums,result);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        vector<int> temp;
        buildSoln(0,n,temp,nums,result);
        return result;
    }
};