//problem link: https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
//timeComplexity: o(n)
//spaceComplexity: O(1)

/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
    int findCarry(Node*temp){
        if(temp==NULL){
            return 1;
        }
        int carry=findCarry(temp->next);
        temp->data=temp->data+carry;
        if(temp->data<10){
            return 0;
        }
        temp->data=0;
        return 1;
    }
  public:
    Node*addOne(Node* head) {
        // code here
        int carry=findCarry(head);
        if(carry){
            Node*newNode=new Node(1);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
};  