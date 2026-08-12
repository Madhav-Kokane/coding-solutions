class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> hashMap;

        int longestSub=0;
        

        int front=0,back=0;
        // int tempSum=0;
        while(front<n){
            hashMap[nums[front]]++;
            if(hashMap[nums[front]] <= k){
                int temp=front-back+1;
                longestSub=max(longestSub,temp);
                // front++;
            }
            else{
                while(hashMap[nums[front]] > k){
                    hashMap[nums[back]]--;
                    back++;
                }
            }
            // hashMap[nums[front]]++;
            front++;
        }
        return longestSub;
    }
};