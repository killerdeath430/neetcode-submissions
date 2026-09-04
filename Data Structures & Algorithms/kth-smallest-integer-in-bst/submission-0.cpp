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
    int kthSmallest(TreeNode* root, int k) {
        vector<TreeNode*>ans;
        teller (root,ans);
        return ans[k-1]->val;
    }
    void teller (TreeNode* root,vector<TreeNode*>&ans){
        if(!root)return;
       teller(root->left,ans);
        ans.push_back(root);
       teller(root->right,ans);
    }
};
