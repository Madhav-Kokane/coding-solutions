# Balanced Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a binary tree, determine if it is  **height-balanced**.

 

 **Example 1:** 

```
Input: root = [3,9,20,null,null,15,7]
Output: true

```

 **Example 2:** 

```
Input: root = [1,2,2,3,3,null,null,4,4]
Output: false

```

 **Example 3:** 

```
Input: root = []
Output: true

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 5000].
- -104 <= Node.val <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 23 MB (beats 54.73%)  
**Submitted:** 2026-10-12T04:11:14.880Z  

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
    int solve(TreeNode* root,bool& balanced){
        if(!root){
            return 0;
        }

        int left=solve(root->left,balanced);
        int right=solve(root->right,balanced);
        if(abs(right-left)>1){
            balanced = false;
        }
        return 1+max(left,right);

    }
    bool isBalanced(TreeNode* root) {
        bool balanced=true;
        solve(root,balanced);
        return balanced;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/balanced-binary-tree/)