class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(auto it : nums){
            hashSet.insert({it});
        }

        
        int maxcount=0;

        for(auto it : hashSet){
            int num=it;
            int count=0;
            if(hashSet.find(num-1) == hashSet.end()){
                while(hashSet.find(num) != hashSet.end()){
                    count++;
                    num++;
                }
                maxcount=max(maxcount,count);
            }
        }
        return maxcount;
    }
};