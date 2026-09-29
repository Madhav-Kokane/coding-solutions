/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || head->next==nullptr){
            return false;
        }

        ListNode* front=head;
        ListNode* back=head;

        while(front && front->next){
            front=front->next->next;
            back=back->next;
            if(front==back){
                return true;
            }
        }
        return false;
    }
};