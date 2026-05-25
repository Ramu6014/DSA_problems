//problem link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
    public static int largest(int[] arr) {
        // code here
        int n=arr.length;
        int maxi=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            maxi=Math.max(maxi,arr[i]);
        }
        return maxi;
    }
}
