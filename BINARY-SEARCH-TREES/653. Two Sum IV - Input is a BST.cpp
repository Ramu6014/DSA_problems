//problem Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
//BETTER APPROACH CODE
//TimeComplexity: O(n)
//spaceComplexity: O(n)
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
    void inorder(TreeNode*root,unordered_map<int,int>&freq){
        if(root==NULL){
            return;
        }
        inorder(root->left,freq);
        freq[root->val]++;
        inorder(root->right,freq);
    }
    bool validate(TreeNode*root,unordered_map<int,int>&freq,int  k){
        if(root==NULL){
            return false;
        }
        int x=k-root->val;
        if(x!=root->val && freq.find(x)!=freq.end()){
            return true;
        }
        if(validate(root->left,freq,k)||validate(root->right,freq,k)){
            return true;
        }
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int>freq;
        inorder(root,freq);
        return validate(root,freq,k);
    }
};