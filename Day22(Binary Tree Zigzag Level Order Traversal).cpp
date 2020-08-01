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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(!root) return v;
        deque<TreeNode*> Q;
        Q.push_back(root);
        bool rev=true;
        
        while(!Q.empty()){
            int count=Q.size();
            vector<int>temp;
            deque<TreeNode*>dq;
            for(int i=0;i<count;i++){
                TreeNode* n=Q.front();
                temp.push_back(n->val);
                Q.pop_front();
                if(rev){
                    if(n->left) dq.push_front(n->left);
                    if(n->right) dq.push_front(n->right);
                }
                else{
                    if(n->right) dq.push_front(n->right);
                    if(n->left) dq.push_front(n->left);
                }
            }
            Q.insert(Q.end(),dq.begin(),dq.end());
            v.push_back(temp);
            rev=!rev;
        }
        return v;
    }
};
