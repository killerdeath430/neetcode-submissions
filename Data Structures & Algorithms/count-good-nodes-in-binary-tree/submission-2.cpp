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
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        set<TreeNode*>seen;
        teller(root,seen,INT_MIN);
        return seen.size();
    }
    void teller (TreeNode* root, set<TreeNode*> &seen,int v){
        if(!root)return;
        if(v<=root->val){
            seen.insert(root);
            v=root->val;
        }
        teller(root->left,seen,v);
        teller(root->right,seen,v);
    }
};
