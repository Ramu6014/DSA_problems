//problem link: https://www.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        if(headRef->next==NULL){
            return headRef;
        }
        Node*first=headRef;
        Node*second=headRef->next;
        while(second!=NULL){
            Node*nextNode=second->next;
            if(first->data==second->data){
                first->next=second->next;
                if(nextNode)nextNode->prev=first;
            }
            else{
                first=first->next;
            }
            second=nextNode;
        }
        return headRef;
    }
};  