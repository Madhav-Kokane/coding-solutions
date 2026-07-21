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