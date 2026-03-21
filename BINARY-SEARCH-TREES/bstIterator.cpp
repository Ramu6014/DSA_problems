//problem Link: https://leetcode.com/problems/binary-search-tree-iterator/
//Time-complexity: O(n)
//space-complexity: O(n)
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
class BSTIterator {
public:
    vector<int>inorder;
    int indx;
    void func(TreeNode*root,vector<int>&inorder){
        if(root==NULL){
            return;
        }
        func(root->left,inorder);
        inorder.push_back(root->val);
        func(root->right,inorder);
    }
    BSTIterator(TreeNode* root) {
        indx=0;
        func(root,inorder);
    }
    
    int next() {
        return inorder[indx++];
    }
    
    bool hasNext() {
        if(indx<inorder.size()){
            return true;
        }
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
