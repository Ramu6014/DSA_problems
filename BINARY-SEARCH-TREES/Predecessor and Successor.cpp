//problem Link: https://www.geeksforgeeks.org/problems/inorder-successor-in-bst/1
//TimeComplexity: O(H)
//spaceComplexity: O(1)
/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    void func(Node*root,Node*x,int &successor){
        if(root==NULL){
            return;
        }
        if(root->data>x->data){
            successor=root->data;
            func(root->left,x,successor);
        }
        else{
            func(root->right,x,successor);
        }
    }
    int inOrderSuccessor(Node *root, Node *x) {
        // Your code here
        int successor=-1;
        func(root,x,successor);
        return successor;
        
    }
};