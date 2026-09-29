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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyNode=new ListNode(0,head);
        ListNode* front =dummyNode;
        ListNode* back=dummyNode;

        int count=0;
        ListNode* temp=head;
        while(count<=n){
            front=front->next;
            count++;
        }

        // front=temp;
        while(front != nullptr){
            front=front->next;
            back=back->next;
        }

        back->next=back->next->next;
        return dummyNode->next;
    }
};