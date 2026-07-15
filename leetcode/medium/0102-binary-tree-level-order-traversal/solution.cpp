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