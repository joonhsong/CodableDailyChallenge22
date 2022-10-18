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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> average;
        queue<TreeNode*> bfs;
        bfs.push(root);
        
        while(!bfs.empty()){
            int n = bfs.size();
            double s = 0;
            for(int i = 0; i < n; i++){
                TreeNode* no = bfs.front();
                if(no->left){
                    bfs.push(no->left);
                }
                if(no->right){
                    bfs.push(no->right);
                }
                s += no->val;
                bfs.pop();
            }
            average.push_back(s/n);
        }
        return average;
    }
};