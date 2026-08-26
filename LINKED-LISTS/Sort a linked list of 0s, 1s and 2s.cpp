//problem link: https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

/* Node is defined as
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
  public:
    Node* segregate(Node* head){
        // code here
        Node*zeroNode=new Node(-1);
        Node*zero=zeroNode;
        Node*oneNode=new Node(-1);
        Node*one=oneNode;
        Node*twoNode=new Node(-1);
        Node*two=twoNode;
        Node*temp=head;
        while(temp!=NULL){
            Node*nextNode=temp->next;
            temp->next=NULL;
            if(temp->data==0){
                zero->next=temp;
                zero=zero->next;
            }
            else if(temp->data==1){
                one->next=temp;
                one=one->next;
            }
            else{
                two->next=temp;
                two=two->next;
            }
            temp=nextNode;
        }
        if(oneNode->next){
            zero->next=oneNode->next;
            one->next=twoNode->next;
        }
        else{
        zero->next=twoNode->next;
        }
        return zeroNode->next;
    }
};