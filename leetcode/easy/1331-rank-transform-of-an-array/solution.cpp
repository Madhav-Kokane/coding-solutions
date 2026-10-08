class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_set<int> hashSet;
        for(auto it : arr){
            hashSet.insert({it});
        }

        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto it : hashSet){
            pq.push(it);
        }

        unordered_map<int,int> hashMap;
        int i=1;

        while(!pq.empty()){
            hashMap[pq.top()]=i;
            i++;
            pq.pop();
        }

        int n=arr.size();
        for(int i=0;i<n;i++){
            arr[i]=hashMap[arr[i]];
        }
        return arr;
    }
};