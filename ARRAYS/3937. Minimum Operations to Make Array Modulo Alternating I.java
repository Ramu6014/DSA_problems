//problem link: https://leetcode.com/problems/minimum-operations-to-make-array-modulo-alternating-i/
//timeComplexity: O(n*k^2)
//spaceComplexity: O(1)

class Solution {
    public int distance(int rem,int var,int k){
        int d=Math.abs(rem-var);
        return Math.min(d,k-d);
    }
    public int minOperations(int[] nums, int k) {
        int n=nums.length;
        int minOp=Integer.MAX_VALUE;
        for(int x=0;x<k;x++){
            for(int y=0;y<k;y++){
                if(x==y){
                    continue;
                }
                int cnt=0;
                //even indx
                for(int i=0;i<n;i+=2){
                    int rem=nums[i]%k;
                    cnt+=distance(rem,x,k);
                }
                //odd indx
                for(int i=1;i<n;i+=2){
                    int rem=nums[i]%k;
                    cnt+=distance(rem,y,k);
                }
                minOp=Math.min(minOp,cnt);
            }
        }
        return minOp;
    }
}