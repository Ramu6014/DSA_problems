//problem link: https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1
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
}; */

class Solution {
  public:
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        // code here
        vector<vector<int>>ans;
        Node*front=head;
        Node*back=head;
        while(back->next!=NULL){
            back=back->next;
        }
        while(front!=back && front->prev!=back){
            int val=front->data+back->data;
            if(val==target){
                ans.push_back({front->data,back->data});
                front=front->next;
                back=back->prev;
            }
            else if(val>target){
                back=back->prev;
            }
            else{
                front=front->next;
            }
        }
        return ans;
    }
};