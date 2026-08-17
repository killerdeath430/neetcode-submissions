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
    int teller (TreeNode* root,bool &hai){
        if (!root) return 0;
        int l = teller(root->left,hai);
        int r= teller(root->right,hai);
        if (abs(l-r)>1)hai = false;
        return 1+max(l,r);
        
    }
    bool isBalanced(TreeNode* root) {
        bool hai = true;
        teller(root,hai);
        return hai;
    }
};
