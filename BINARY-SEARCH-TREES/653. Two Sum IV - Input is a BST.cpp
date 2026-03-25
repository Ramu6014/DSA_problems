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
    bool validate(TreeNode*root,unordered_map<int,int>&freq,int  k){
        if(root==NULL){
            return false;
        }
        freq[root->val]++;
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
        return validate(root,freq,k);
    }
};

//OPTIMAL APPROACH CODE
//TimeComplexity: O(n)
//SpaceComplexity: O(H)
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
 class BSTIterator{
 public:
    stack<TreeNode*>st;
    //false---next()
    //true---before()
    bool reverse;
        BSTIterator(TreeNode*root,bool isReverse){
            reverse=isReverse;
            pushAll(root,reverse);
        }
        int next(){
            TreeNode*node=st.top();
            st.pop();
            if(reverse==false){
                pushAll(node->right,reverse);
            }
            else{
                pushAll(node->left,reverse);
            }
            return node->val;
        }
        void pushAll(TreeNode*node,bool reverse){
            while(node){
                st.push(node);
                if(reverse==false){
                    node=node->left;
                }
                else{
                    node=node->right;
                }
            }
            return;
        }
    };
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        int i=l.next();
        int j=r.next();
        while(i<j){
            if(i+j==k){
                return true;
            }
            else if(i+j<k){
                i=l.next();
            }
            else{
                j=r.next();
            }
        }
        return false;
    }
};