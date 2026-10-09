class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
                                       int k) {
        //  priority_queue<pair<int,pair<int,int>> ,
        //  vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>
        //  minHeap;

        priority_queue<pair<int, pair<int, int>>> maxHeap;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                int sum = nums1[i] + nums2[j];
                // minHeap.push({sum,{nums1[i],nums2[j]}});

                if(maxHeap.size() < k){
                    maxHeap.push({sum,{nums1[i],nums2[j]}});
                }else if(maxHeap.top().first > sum){
                    maxHeap.pop();
                    maxHeap.push({sum,{nums1[i],nums2[j]}});
                }else{
                    break;
                }

            }
        }
        
                vector<vector<int>> result;
                while(!maxHeap.empty()){
                    auto temp=maxHeap.top().second;
                    int val1=temp.first;
                    int val2=temp.second;
                    maxHeap.pop();
                    result.push_back({val1,val2});
                    
                }
                return result;
            
        
    }
};