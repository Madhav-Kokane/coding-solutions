class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;

        for(auto it : stones){
            maxHeap.push(it);
        }

        while(maxHeap.size()>1){
            int y=maxHeap.top();
            maxHeap.pop();
            int x=maxHeap.top();
            maxHeap.pop();

            if(x!=y){
                y=y-x;
                maxHeap.push(y);
            }
        }

        if(maxHeap.empty()){
            return 0;
        }
        return maxHeap.top();
    }
};