//problem link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/?envType=daily-question&envId=2026-06-14
//timeComplexity: O(n)
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
    public int pairSum(ListNode head) {
        ListNode temp=head;
        ArrayList<Integer>arr=new ArrayList<>();
        while(temp!=null){
            arr.add(temp.val);
            temp=temp.next;
        }
        int i=0;
        int j=arr.size()-1;
        int maxSum=Integer.MIN_VALUE;
        while(i<j){
            int sum=arr.get(i)+arr.get(j);
            maxSum=Math.max(maxSum,sum);
            i++;
            j--;
        }
        return maxSum;
    }
}