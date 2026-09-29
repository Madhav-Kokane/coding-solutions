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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr){
            return nullptr;
        }

        ListNode* front=head;
        ListNode* back=head;
        ListNode* backWord=nullptr;
        while(front !=nullptr && front->next!=nullptr){
            front=front->next->next;
            backWord=back;
            back=back->next;
        }


        backWord->next=backWord->next->next;
        delete back;
        return head;
    }
};