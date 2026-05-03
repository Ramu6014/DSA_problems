//problem link: https://leetcode.com/problems/n-ary-tree-level-order-traversal/description/
//timeComplexity: O(n)
//spaceComplexity: O(n)

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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>temp;
            for(int i=0;i<s;i++){
                Node*node=q.front();
                q.pop();
                temp.push_back(node->val);
                int num=node->children.size();
            for(int i=0;i<num;i++){
                q.push(node->children[i]);
            }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};