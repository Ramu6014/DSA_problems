//problem link: https://www.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

/* a Node of the doubly linked list
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
    Node* deleteAllOccurOfX(Node* head, int x) {
        // code here
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==x){
                if(temp==head){
                    head=head->next;
                }
                Node*nextNode=temp->next;
                Node*prevNode=temp->prev;
                if(nextNode)nextNode->prev=temp->prev;
                if(prevNode)prevNode->next=temp->next;
            }
            temp=temp->next;
        }
        return head;
    }
};