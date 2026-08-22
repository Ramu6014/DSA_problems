//problem link: https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        Node*temp=head;
        while(temp){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};
