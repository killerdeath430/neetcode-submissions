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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(!subRoot&&root)return true;
       if(!root&&subRoot)return false;

       if( teller(root,subRoot)) return true;
       return isSubtree(root->left,subRoot)||isSubtree (root->right,subRoot);
        
    }
    bool teller(TreeNode* root, TreeNode* subRoot){
        if(!root&&!subRoot)return true ;
        else if(root&&subRoot&&root->val==subRoot->val){
           return teller(root->left,subRoot->left)&&teller(root->right,subRoot->right);
        }
        else{
           return false;
        }
    }
};