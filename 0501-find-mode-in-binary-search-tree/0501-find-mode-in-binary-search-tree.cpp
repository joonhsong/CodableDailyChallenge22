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
    int count = 0;
    int cur = 0;
    int maxx = 0;
    vector<int> mode;
    
    void traversal(TreeNode*root){
        if(root->left != NULL){
            traversal(root->left);
        }
        if(count == 0 || cur != root->val){
            count = 1;
            cur = root->val;
        }
        else{
            count++;
        }
        if(maxx <= count){
            if(maxx < count){
                maxx = count;
                mode.clear();
            }
            mode.push_back(root->val);
        }
        if(root->right != NULL){
            traversal(root->right);
        }
    }
    
    
    vector<int> findMode(TreeNode* root) {
        traversal(root);
        return mode;
    }
};