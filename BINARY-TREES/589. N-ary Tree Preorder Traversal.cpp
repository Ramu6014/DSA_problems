//problem link: https://leetcode.com/problems/n-ary-tree-preorder-traversal/
//timeComplexity: O(n)
//spaceComplexity: o(n)

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void func(Node*root,vector<int>&preorder){
        int s=root->children.size();
        preorder.push_back(root->val);
        if(s==0){
            return;
        }
        for(int i=0;i<s;i++){
            func(root->children[i],preorder);
        }
    }
    vector<int> preorder(Node* root) {
        if(root==NULL){
            return {};
        }
        vector<int>preorder;
        func(root,preorder);
        return preorder;
    }
};