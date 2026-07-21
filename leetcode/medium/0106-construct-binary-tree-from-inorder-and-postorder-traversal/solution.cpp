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