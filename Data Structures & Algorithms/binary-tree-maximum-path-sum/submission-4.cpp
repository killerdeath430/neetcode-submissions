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
    int maxPathSum(TreeNode* root) {
        int sum=root->val;
        teller(root,sum);
        return sum;
    }
    int teller(TreeNode* root,int &sum){
        if(!root)return 0;
        int left= max(teller(root->left,sum),0);
        int right = max( teller(root->right,sum),0);

        sum=max(sum, root->val+left+right);
        return root->val +max(left,right);

    }
};
