//problem link: https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1
//timeComplexity: O(k*(2m))
//spaceComplexity: O(1)

/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};*/

class Solution {
    Node*mergeList(Node*t1,Node*t2){
        Node*dummyNode=new Node(-1);
        Node*curr=dummyNode;
        while(t1!=NULL && t2!=NULL){
            if(t1->data<=t2->data){
                curr->bottom=t1;
                curr=t1;
                t1=t1->bottom;
            }
            else{
                curr->bottom=t2;
                curr=t2;
                t2=t2->bottom;
            }
        }
        if(t1){
            curr->bottom=t1;
        }
        if(t2){
            curr->bottom=t2;
        }
        return dummyNode->bottom;
    }
    Node*function(Node*head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node*mergedHead=function(head->next);
        return mergeList(head,mergedHead);
    }
  public:
    Node* flatten(Node* head) {
        // code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        return function(head);
    }
};