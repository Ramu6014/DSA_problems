//problem link: https://www.geeksforgeeks.org/problems/delete-head-of-doubly-linked-list/1
//timeComplexity: O(1)
//spaceComplexity: O(1)

/* Structure of doubly linked list Node
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    Node* deleteHead(Node* head) {
        // code here
        Node*temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        return head;
    }
};
