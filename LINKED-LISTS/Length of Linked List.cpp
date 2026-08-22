//problem link: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int cnt=0;
        Node*temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
};