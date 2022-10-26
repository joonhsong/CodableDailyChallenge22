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
    vector<int> v;
    
    void inorder(TreeNode* root){
        if(root == NULL) return;
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        
        inorder(root);
        int x = 0;
        int y = v.size() - 1;
        
        while(x < y){
            int s = v[x] + v[y];
            
            if(s == k) return true;
            else if(s < k) x++;
            else y--;
        }
        return false;
    }
};