/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* tmp;
        if(original ==NULL) return NULL;
        
        if(cloned->val == target->val) return cloned;
        
        tmp = getTargetCopy(original->left, cloned->left, target);
        if(tmp != NULL) return tmp;
        
        return getTargetCopy(original->right, cloned->right, target);
    }
};