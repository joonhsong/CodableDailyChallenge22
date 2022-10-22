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
    TreeNode* y = NULL;
    int countchild(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        return countchild(root->left)+countchild(root->right)+1;
    }
    void find(TreeNode* root, int x){
        if(root == NULL || y != NULL){
            return;
        }
        if(root->val == x){
            y = root;
        }
        find(root->left, x);
        find(root->right, x);
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        find(root, x);
        int l = countchild(y->left);
        int r = countchild(y->right);
        return max(max(l, r), n-l-r-1) > n/2;
    }
};