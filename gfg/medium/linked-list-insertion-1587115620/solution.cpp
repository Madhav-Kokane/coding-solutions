/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* nodeToInsert=new Node(x);
        
        if(head==nullptr){
            return nodeToInsert;
        }
        Node* temp=head;
        
        while(temp->next != nullptr){
            temp=temp->next;
        }
        temp->next=nodeToInsert;
        return head;
    
    }
};