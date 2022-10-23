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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vv;
        vector<int> v;
        queue<TreeNode*> q;
        if(root == NULL){
            return vector<vector<int>>();
        }
        
        q.push(root);
        // v.push_back(q.front()->val);
        // vv.push_back(v);
        // v.clear();
        
        
        while(!q.empty()){
            // TreeNode* t = q.front();
            // q.pop();
            int n = q.size();
            
            for(int i = 0; i < n; i++){
                TreeNode* t = q.front();
                v.push_back(q.front()->val);
                q.pop();
                
                if(t->left != NULL){
                    q.push(t->left);
                
                }
                if(t->right != NULL){
                    q.push(t->right);
                }
            }
            vv.push_back(v);
            v.clear();
            
        }
        
       return vv;
        
    }
};