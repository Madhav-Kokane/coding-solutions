class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for(auto it: nums){
            pq.push(it);
        }

        int i=1;
        while(i<k){
            pq.pop();
            i++;
        }

        return pq.top();
    }
};