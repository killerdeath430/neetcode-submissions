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
        int seen=0;
        int v=root->val;
        teller(root,seen,v);
        return seen;
    }
    void teller (TreeNode* root, int &seen,int v){
        if(!root)return;
        if(v<=root->val){
            seen++;
            v=root->val;
        }
        teller(root->left,seen,v);
        teller(root->right,seen,v);
    }
};
