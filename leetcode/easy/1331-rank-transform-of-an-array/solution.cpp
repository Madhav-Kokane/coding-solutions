class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums=arr;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> hashSet;
        int rank=1;
        for(auto& it : nums){
            if(!hashSet.count(it)){
                hashSet[it]=rank;
                rank++;
            }
        }
     
        int n=arr.size();
        for(int i=0;i<n;i++){
            arr[i]=hashSet[arr[i]];
        }
        return arr;
    }
};