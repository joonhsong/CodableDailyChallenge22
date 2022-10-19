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
    TreeNode* construct(vector<int>& nums, int left_, int right_){
        if(left_ > right_){
            return NULL;
        }
        int middle = left_ + (right_ - left_)/2;
        TreeNode* root = new TreeNode(nums[middle]);
        
        root->left = construct(nums, left_, middle - 1);
        root->right = construct(nums, middle + 1, right_);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return construct(nums, 0, nums.size() - 1);
    }
};