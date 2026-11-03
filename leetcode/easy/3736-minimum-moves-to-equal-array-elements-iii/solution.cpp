class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int maxElement=INT_MIN;
        for(auto it : nums){
            maxElement=max(maxElement,it);
        }

        int ans=0;
        for(auto it : nums){
            ans += abs(maxElement-it);
        }
        return ans;
    }
};