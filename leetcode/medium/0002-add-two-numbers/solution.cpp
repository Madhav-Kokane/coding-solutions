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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        int sum=0;

        ListNode* dummyNode=new ListNode(0,nullptr);
        ListNode* temp=dummyNode;

        while(l1 && l2){
            sum=carry+l1->val+l2->val;
            l1=l1->next;
            l2=l2->next;

            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
        }

        while(l1){
            sum=carry+l1->val;
            l1=l1->next;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
        }

        while(l2){
            sum=carry+l2->val;
            l2=l2->next;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
        }

        if(carry>0){
            temp->next=new ListNode(carry);
            temp=temp->next;
        }
        return dummyNode->next;
    }
};