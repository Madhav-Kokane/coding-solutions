/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> minHeap;

        int n=lists.size();
        for(int i=0;i<n;i++){
            ListNode* temp=lists[i];
            while(temp){
                minHeap.push(temp->val);
                temp=temp->next;
            }
        }

        ListNode* dummyNode=new ListNode(0);
        ListNode* temp1=new ListNode(0);
        temp1=dummyNode;

        while(!minHeap.empty()){
            ListNode* temp2=new ListNode(minHeap.top());
            temp1->next=temp2;
            temp1=temp1->next;
            minHeap.pop();
        }
        
        return dummyNode->next;
    }
};