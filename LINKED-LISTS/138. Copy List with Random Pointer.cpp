//problem link: https://leetcode.com/problems/copy-list-with-random-pointer/
//timeComplexity: O(n)
//spaceComplexity: O(1)

/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    void insertList(Node temp){
        while(temp!=null){
            Node newNode=new Node(temp.val);
            newNode.next=temp.next;
            temp.next=newNode;
            temp=temp.next.next;
        }
        return;
    }
    void connectRandom(Node temp){
        while(temp!=null){
            Node copiedNode=temp.next;
            copiedNode.random=temp.random==null?null:temp.random.next;
            temp=temp.next.next;
        }
        return;
    }
    Node connectNext(Node temp){
        Node dummyNode=new Node(-1);
        Node curr=dummyNode;
        while(temp!=null){
            curr.next=temp.next;
            curr=curr.next;
            temp.next=temp.next.next;
            temp=temp.next;
        }
        return dummyNode.next;
    }
    public Node copyRandomList(Node head) {
        if(head==null)return null;
        insertList(head);
        connectRandom(head);
        return connectNext(head);
    }
}