# Maximum Depth of Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `root` of a binary tree, return  *its maximum depth*.

A binary tree's  **maximum depth**  is the number of nodes along the longest path from the root node down to the farthest leaf node.

 

 **Example 1:** 

```
Input: root = [3,9,20,null,null,15,7]
Output: 3

```

 **Example 2:** 

```
Input: root = [1,null,2]
Output: 2

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 104].
- -100 <= Node.val <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 22.4 MB (beats 6.62%)  
**Submitted:** 2026-07-15T08:51:19.889Z  

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        /*
        if(root==nullptr){
            return 0;
        }

        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        return 1+max(left,right);
        */

        int maxDepth=0;
        if(!root){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int qSize=q.size();
            for(int i=0;i<qSize;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }

                if(curr->right){
                    q.push(curr->right);
                }
            }
            maxDepth++;
        }
        return maxDepth;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-depth-of-binary-tree/)