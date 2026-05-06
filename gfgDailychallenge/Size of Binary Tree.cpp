//problem link: https://www.geeksforgeeks.org/problems/size-of-binary-tree/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    void inorder(Node*root,int &cnt){
        if(root==NULL){
            return;
        }
        inorder(root->left,cnt);
        cnt++;
        inorder(root->right,cnt);
    }
    int getSize(Node* root) {
        // code here
        int cnt=0;
        inorder(root,cnt);
        return cnt;
    }
};