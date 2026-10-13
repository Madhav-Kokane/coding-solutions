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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if(!root){
            return result;
        }
        map<int,map<int,multiset<int>>> hashMap;
        queue<tuple<TreeNode*,int,int>> q;
        q.push({root,0,0});

        while(!q.empty()){
            TreeNode* node=get<0>(q.front());
            int row=get<1>(q.front());
            int ind=get<2>(q.front());
            q.pop();

            hashMap[ind][row].insert(node->val);

            if(node->left){
                q.push({node->left,row+1,ind-1});
            }

            if(node->right){
                q.push({node->right,row+1,ind+1});
            }
        }

        for(auto& col:hashMap){
            vector<int> temp;

            for(auto &row : col.second){
                for(int val:row.second ){
                    temp.push_back(val);
                }
            }
            result.push_back(temp);
        } 
        return result;
    }
};