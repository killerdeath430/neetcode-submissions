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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool hai=true;
        teller(p,q,hai);
        return hai;
    }
    void teller (TreeNode* p, TreeNode* q, bool &hai){
        if(!p&&!q)return;
        else if(p&&q){
            teller(p->left,q->left,hai);
            teller(p->right,q->right,hai);
            if(p->val!=q->val)hai=false;
            return;
        }
        else {
            hai=false;
            return;
        }
    }
};
