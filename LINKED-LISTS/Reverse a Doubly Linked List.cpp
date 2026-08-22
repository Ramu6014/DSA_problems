//problem link: https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node*temp=head;
        Node*last=NULL;
        Node*nextNode=NULL;
        Node*prevNode=NULL;
        while(temp){
            nextNode=temp->next;
            temp->next=last;
            temp->prev=nextNode;
            last=temp;
            temp=nextNode;
        }
        return last;
    }
};