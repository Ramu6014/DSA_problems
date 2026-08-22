//problem link: https://www.geeksforgeeks.org/problems/linked-list-insertion-at-beginning/1
//timeComplexity: O(1)
//spaceComplexity: O(1)

/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        Node*dummyNode=new Node(x);
        dummyNode->next=head;
        head=dummyNode;
        return head;
    }
};