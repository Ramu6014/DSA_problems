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
        while(temp!=NULL){
            Node*nextNode=temp->next;
            temp->prev=temp->next;
            temp->next=last;
            last=temp;
            temp=nextNode;
        }
        return last;
    }
};