# Construct Binary Tree from Preorder and Inorder Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integer arrays `preorder` and `inorder` where `preorder` is the preorder traversal of a binary tree and `inorder` is the inorder traversal of the same tree, construct and return  *the binary tree*.

 

 **Example 1:** 

```
Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]

```

 **Example 2:** 

```
Input: preorder = [-1], inorder = [-1]
Output: [-1]

```

 

 **Constraints:** 

- 1 <= preorder.length <= 3000
- inorder.length == preorder.length
- -3000 <= preorder[i], inorder[i] <= 3000
- preorder and inorder consist of unique values.
- Each value of inorder also appears in preorder.
- preorder is guaranteed to be the preorder traversal of the tree.
- inorder is guaranteed to be the inorder traversal of the tree.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 27.5 MB (beats 33.82%)  
**Submitted:** 2026-07-21T12:04:01.262Z  

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
    unordered_map<int,int> map;
    int index=0;
    TreeNode* build(vector<int>& preorder,int start,int end){
        if(start>end){
            return nullptr;
        }

        int rootValue=preorder[index];
        index++;
        int mid=map[rootValue];
        TreeNode* root=new TreeNode(rootValue);

        root->left=build(preorder,start,mid-1);
        root->right=build(preorder,mid+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++){
            map[inorder[i]]=i;
        }
        return build(preorder,0,n-1);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)