/* Linked List Node Structure
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(!head || !head->next){
            return nullptr;
        }
        
        Node* temp=head;
        while(temp->next->next != nullptr){
            temp=temp->next;
        }
        
        Node* ptr=temp->next;
        temp->next=nullptr;
        delete ptr;
        return head;
    }
};