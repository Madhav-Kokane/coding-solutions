class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashMap;
        vector<int> result;
        for(auto it : nums){
            hashMap[it]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto it : hashMap){
            pq.push({it.second,it.first});
        }

        while(k>0){
            int temp=pq.top().second;
            result.push_back(temp);
            pq.pop();
            k--;
        }
        return result;
    }
};