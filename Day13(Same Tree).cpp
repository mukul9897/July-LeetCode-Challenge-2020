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
    vector<int>v1;
    vector<int>v2;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        trav1(p);
        trav2(q);
        if(v1.size()!=v2.size()) return false;
        else{
            int flag=0;
            for(int i=0;i<(int)v1.size();i++) if(v1[i]!=v2[i]) flag=1;
            if(flag==0) return true;
            else return false;
        }
        return true;
    }
    void trav1(TreeNode* p){
        if(p==NULL){  v1.push_back(INT_MAX); return; }
        v1.push_back(p->val);
        trav1(p->left);
        trav1(p->right);
    }
    void trav2(TreeNode* p){
        if(p==NULL){  v2.push_back(INT_MAX); return; }
        v2.push_back(p->val);
        trav2(p->left);
        trav2(p->right);
    }
};
