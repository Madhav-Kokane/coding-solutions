class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>, greater<pair<int,pair<int,int>>>>> pq;

        using myPair=pair<long long,pair<int,int>>;
        priority_queue<myPair,vector<myPair>,greater<myPair>> pq;

        for(auto it : points){
            long long x=it[0];
            long long y=it[1];
            // long long res=sqrt((x*x)+(y*y));
            long long res=(x*x)+(y*y);

            pq.push({res,{it[0],it[1]}});
        }

        int i=0;
        vector<vector<int>> result;
        while(i<k){
            int m=pq.top().second.first;
            int n=pq.top().second.second;
            result.push_back({m,n});
            pq.pop();
            i++;
        }
        return result;

    }
};