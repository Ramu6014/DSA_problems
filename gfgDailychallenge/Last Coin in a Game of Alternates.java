//problem link: https://www.geeksforgeeks.org/problems/last-coin-in-a-game-of-alternates/1
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
    public int coin(int[] arr) {
        // code here
        int n=arr.length;
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            mini=Math.min(mini,arr[i]);
        }
        return mini;
    }
}