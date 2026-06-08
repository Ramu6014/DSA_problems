//problem link: https://leetcode.com/problems/partition-list/
//timeComplexity: o(n)
//spaceComplexity: o(n)

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode partition(ListNode head, int x) {
        ArrayList<Integer>left=new ArrayList<>();
        ArrayList<Integer>right=new ArrayList<>();
        ListNode temp=head;
        while(temp!=null){
            if(temp.val<x){
                left.add(temp.val);
            }
            else{
                right.add(temp.val);
            }
            temp=temp.next;
        }
        temp=head;
        int indx1=0;
        int indx2=0;
        while(temp!=null){
            if(indx1<left.size()){
                temp.val=left.get(indx1++);
            }
            else{
                temp.val=right.get(indx2++);
            }
            temp=temp.next;
        }
        return head;
    }
}