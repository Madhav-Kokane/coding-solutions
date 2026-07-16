# Subtree of Another Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the roots of two binary trees `root` and `subRoot`, return `true` if there is a subtree of `root` with the same structure and node values of` subRoot` and `false` otherwise.

A subtree of a binary tree `tree` is a tree that consists of a node in `tree` and all of this node's descendants. The tree `tree` could also be considered as a subtree of itself.

 

 **Example 1:** 

```
Input: root = [3,4,5,1,2], subRoot = [4,1,2]
Output: true

```

 **Example 2:** 

```
Input: root = [3,4,5,1,2,null,null,null,null,0], subRoot = [4,1,2]
Output: false

```

 

 **Constraints:** 

- The number of nodes in the root tree is in the range [1, 2000].
- The number of nodes in the subRoot tree is in the range [1, 1000].
- -104 <= root.val <= 104
- -104 <= subRoot.val <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 29 MB (beats 70.73%)  
**Submitted:** 2026-07-16T09:17:54.272Z  

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
    bool isIdentical(TreeNode* root , TreeNode* subRoot){
        if(root==nullptr && subRoot==nullptr){
            return true;
        }

        if(root==nullptr && subRoot!=nullptr){
            return false;
        }

        if(root!=nullptr && subRoot==nullptr){
            return false;
        }

        bool left=isIdentical(root->left,subRoot->left);
        bool right=isIdentical(root->right,subRoot->right);
        return left && right && (root->val == subRoot->val);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==nullptr){
            return true;
        }

        if(root==nullptr){
            return false;
        }

        if(root->val==subRoot->val && isIdentical(root,subRoot)){
            return true;
        }

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);


    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subtree-of-another-tree/)