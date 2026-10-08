# Merge k Sorted Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

You are given an array of `k` linked-lists `lists`, each linked-list is sorted in ascending order.

 *Merge all the linked-lists into one sorted linked-list and return it.* 

 

 **Example 1:** 

```
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted linked list:
1->1->2->3->4->4->5->6

```

 **Example 2:** 

```
Input: lists = []
Output: []

```

 **Example 3:** 

```
Input: lists = [[]]
Output: []

```

 

 **Constraints:** 

- k == lists.length
- 0 <= k <= 104
- 0 <= lists[i].length <= 500
- -104 <= lists[i][j] <= 104
- lists[i] is sorted in ascending order.
- The sum of lists[i].length will not exceed 104.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 44.40%)  
**Memory:** 18.9 MB (beats 23.53%)  
**Submitted:** 2026-10-08T07:08:34.784Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/merge-k-sorted-lists/)