//problem link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/?envType=daily-question&envId=2026-06-15
//timeComplexity: O(n/2)
//spaceComplexity: O(1)

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
    public ListNode deleteMiddle(ListNode head) {
        if(head.next==null){
            return null;
        }
        ListNode slow=head;
        ListNode fast=head;
        ListNode last=null;
        while(fast!=null && fast.next!=null){
            fast=fast.next.next;
            last=slow;
            slow=slow.next;
        }
        last.next=slow.next;
        slow.next=null;
        return head;
    }
}