//problem Link: https://leetcode.com/problems/validate-binary-search-tree/description/
//TimeComplexity: O(n)
//SpaceComplexity: O(1)
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
    bool func(TreeNode*root,long long minRange,long long maxRange){
        if(root==NULL){
            return true;
        }
        if(root->val<=minRange || root->val>=maxRange){
            return false;
        }
        return func(root->left,minRange,root->val)&&func(root->right,root->val,maxRange);
    }
    bool isValidBST(TreeNode* root) {
        return func(root,LLONG_MIN,LLONG_MAX);
    }
};