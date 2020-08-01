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
    vector<vector<int>> levelOrderBottom(TreeNode* root){
        vector<vector<int>>v1;
        if(!root) return v1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>nodes(n);
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                nodes[i]=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            v1.push_back(nodes);
        }
        reverse(v1.begin(),v1.end());
        return v1;
    }
};
