//problem link: https://www.geeksforgeeks.org/problems/check-if-subtree/1
//timeComplexity: O(n*m)
//spaceComplexity: O(n+m)

/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  private:
   bool isValid(Node*root1,Node*root2){
       if(root1==NULL && root2==NULL){
           return true;
       }
       if(root1==NULL||root2==NULL){
           return false;
       }
    if(root1->data!=root2->data){
        return false;
    }
    return isValid(root1->left,root2->left) && isValid(root1->right,root2->right);
   }
  public:
    bool isSubTree(Node *root1, Node *root2) {
        // code here
        if(root1==NULL){
            return false;
        }
        if(isValid(root1,root2)){
            return true;
        }
        return isSubTree(root1->left,root2)||isSubTree(root1->right,root2);
    }
};