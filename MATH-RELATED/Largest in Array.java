//problem link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1?page=1&category=Arrays&difficulty=Basic
//timeComplexity: O(n)
//spaceComplexity: o(1)

class Solution {
    public static int largest(int[] arr) {
        // code here
        int maxi=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            maxi=Math.max(maxi,arr[i]);
        }
        return maxi;
    }
}
