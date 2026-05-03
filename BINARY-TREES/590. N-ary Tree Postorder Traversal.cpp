//problem link: https://leetcode.com/problems/n-ary-tree-postorder-traversal/
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
   void func(Node*root,vector<int>&ans){
    int s=root->children.size();
    ans.push_back(root->val);
    if(s==0){
        return;
    }
    for(int i=s-1;i>=0;i--){
        func(root->children[i],ans);
    }
   }
    vector<int> postorder(Node* root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        func(root,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};