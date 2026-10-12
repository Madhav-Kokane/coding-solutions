# Symmetric Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `root` of a binary tree,  *check whether it is a mirror of itself*  (i.e., symmetric around its center).

 

 **Example 1:** 

```
Input: root = [1,2,2,3,4,4,3]
Output: true

```

 **Example 2:** 

```
Input: root = [1,2,2,null,3,null,3]
Output: false

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [1, 1000].
- -100 <= Node.val <= 100

 

 **Follow up:**  Could you solve it both recursively and iteratively?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 18.4 MB (beats 73.07%)  
**Submitted:** 2026-10-12T05:31:50.070Z  

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
    bool symmetric(TreeNode* root1,TreeNode* root2){
        if(!root1 && !root2){
            return true;
        }

        if((!root1 && root2) || (root1 && !root2)){
            return false;
        }

        if(root1->val != root2->val){
            return false;
        }

        return symmetric(root1->left,root2->right) && symmetric(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return symmetric(root->left,root->right);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/symmetric-tree/)