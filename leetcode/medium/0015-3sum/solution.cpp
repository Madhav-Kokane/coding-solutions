class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;

        for(int start=0;start<n;start++){
            if(start>0 && nums[start]==nums[start-1]){
                continue;
            }

            int mid=start+1;
            int end=n-1;

            while(mid<end){
                int sum=nums[start]+nums[mid]+nums[end];
                if(sum==0){
                    result.push_back({nums[start],nums[mid],nums[end]});
                    mid++;
                    end--;

                    while(mid<end && nums[mid]==nums[mid-1]){
                        mid++;
                    }

                    while(mid<end &&  nums[end]==nums[end+1]){
                        end--;
                    }
                }else if(sum<0){
                    mid++;
                }else{
                    end--;
                }
            }
        }
        return result;
    }
};