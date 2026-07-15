# Binary Tree Level Order Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `root` of a binary tree, return  *the level order traversal of its nodes' values*. (i.e., from left to right, level by level).

 

 **Example 1:** 

```
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]

```

 **Example 2:** 

```
Input: root = [1]
Output: [[1]]

```

 **Example 3:** 

```
Input: root = []
Output: []

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 2000].
- -1000 <= Node.val <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 17.2 MB (beats 16.00%)  
**Submitted:** 2026-07-15T11:55:15.496Z  

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        if(!root){
            return result;
        }

        q.push(root);
        while(!q.empty()){
            int qSize=q.size();
            vector<int> temp;
            for(int i=0;i<qSize;i++){
                TreeNode* tempNode=q.front();
                q.pop();
                temp.push_back(tempNode->val);

                if(tempNode->left){
                    q.push(tempNode->left);
                }

                if(tempNode->right){
                    q.push(tempNode->right);
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-tree-level-order-traversal/)