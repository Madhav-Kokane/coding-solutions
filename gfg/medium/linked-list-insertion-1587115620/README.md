# linked-list-insertion-1587115620

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T07:00:33.563Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1)