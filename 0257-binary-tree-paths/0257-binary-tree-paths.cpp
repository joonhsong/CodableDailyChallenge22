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
    void solve(TreeNode* root, string st, vector<string>& answer){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            st += to_string(root->val);
            answer.push_back(st);
            return;
        }
        st += (to_string(root->val) + "->");
        solve(root->left, st, answer);
        solve(root->right, st, answer);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> a;
        solve(root, "", a);
        return a;
    }
};