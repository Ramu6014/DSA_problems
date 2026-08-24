//problem link: https://www.geeksforgeeks.org/problems/find-length-of-loop/1
//timeComplexity: o(n)
//spaceComplexity: O(1)

/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        if(head->next==NULL){
            return 0;
        }
        Node*slow=head;
        Node*fast=head;
        int cnt=1;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                Node*t1=slow->next;
                while(t1!=slow){
                    cnt++;
                    t1=t1->next;
                }
                return cnt;
            }
        }
        return 0;
    }
};