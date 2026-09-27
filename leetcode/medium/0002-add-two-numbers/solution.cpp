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
        ListNode* newNode=new ListNode(0,nullptr);
        ListNode* temp=newNode;
        while(l1 && l2){
            int sum=carry+l1->val+l2->val;
            int rem=sum%10;
            carry=sum/10;
            temp->next=new ListNode(rem,nullptr);
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }

        while(l1){
            int sum=carry+l1->val;
            int rem=sum%10;
            carry=sum/10;
            temp->next=new ListNode(rem,nullptr);
            temp=temp->next;
            l1=l1->next;
        }

        while(l2){
            int sum=carry+l2->val;
            int rem=sum%10;
            carry=sum/10;
            temp->next=new ListNode(rem,nullptr);
            temp=temp->next;
            l2=l2->next;
        }

        while(carry>0){
            int rem=carry%10;
            carry=carry/10;
            temp->next=new ListNode(rem,nullptr);
            temp=temp->next;
        }

        return newNode->next;
    }
};