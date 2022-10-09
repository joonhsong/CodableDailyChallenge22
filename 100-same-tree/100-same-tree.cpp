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
        if(p == NULL && q == NULL){
            return true;
        }
        if(p == NULL || q == NULL){
            return false;
        }
        if(p->val != q->val){
            return false;
        }
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
    } 
    
    
    
    
    /*
    vector<int> output;
    vector<int> inorder(TreeNode* root) {
        if(root == NULL){
            return output;
        }
        inorder(root->left);
        output.push_back(root->val);
        inorder(root->right);
        
        return output;
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> pp;
        vector<int> qq;
        
        pp = inorder(p);
        qq = inorder(q);
        
        for(int i = 0; i < pp.size(); i++){
            if(pp[i] != qq[i]) return false;
        }
        return true;
        
    } */
    
};