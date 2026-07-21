# Construct Binary Tree from Inorder and Postorder Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integer arrays `inorder` and `postorder` where `inorder` is the inorder traversal of a binary tree and `postorder` is the postorder traversal of the same tree, construct and return  *the binary tree*.

 

 **Example 1:** 

```
Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]

```

 **Example 2:** 

```
Input: inorder = [-1], postorder = [-1]
Output: [-1]

```

 

 **Constraints:** 

- 1 <= inorder.length <= 3000
- postorder.length == inorder.length
- -3000 <= inorder[i], postorder[i] <= 3000
- inorder and postorder consist of unique values.
- Each value of postorder also appears in inorder.
- inorder is guaranteed to be the inorder traversal of the tree.
- postorder is guaranteed to be the postorder traversal of the tree.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 46.93%)  
**Memory:** 27.5 MB (beats 59.95%)  
**Submitted:** 2026-07-21T12:22:58.794Z  

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
    
    TreeNode* build(vector<int>& postorder,int start,int end,int& index){
        if(start>end){
            return nullptr;
        }

        int rootValue=postorder[index];
        index--;
        TreeNode* root=new TreeNode(rootValue);
        int mid=map[rootValue];
        root->right=build(postorder,mid+1,end,index);
        root->left=build(postorder,start,mid-1,index);
        return root;



    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++){
            map[inorder[i]]=i;
        }
        
        int index=n-1;
        return build(postorder,0,n-1,index);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)