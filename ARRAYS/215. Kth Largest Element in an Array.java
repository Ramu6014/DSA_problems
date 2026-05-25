//problem link: https://leetcode.com/problems/kth-largest-element-in-an-array/
//timeComplexity: O(nlog(k))
//spaceComplexity: O(K)

class Solution {
    public int findKthLargest(int[] nums, int k) {
        int n=nums.length;
        PriorityQueue<Integer>pq=new PriorityQueue<>();
        for(int i=0;i<n;i++){
            pq.add(nums[i]);
            if(pq.size()>k){
                pq.poll();
            }
        }
        return pq.poll();
    }
}