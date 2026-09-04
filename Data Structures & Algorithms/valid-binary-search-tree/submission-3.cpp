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
    bool isValidBST(TreeNode* root) {
        bool hai=true;
        teller(root,nullptr,nullptr,hai);
        return hai;
    }
    void teller (TreeNode* root,TreeNode* mini,TreeNode* maxi,bool &hai){
        if(!root)return;
        if(mini){
            if(mini->val>=root->val){
                hai=false;
                return;
            }
        }
         if(maxi){
            if(maxi->val<=root->val){
                hai=false;
                return;
            }
        }
        
        teller(root->left,mini,root,hai);
        teller(root->right,root,maxi,hai);
    }
};
