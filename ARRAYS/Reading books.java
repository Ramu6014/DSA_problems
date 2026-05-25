//problem link: https://www.geeksforgeeks.org/problems/reading-books3803/1?page=5&category=Arrays&difficulty=Basic&sortBy=submissions
//timeComplexity: O(n)
//spaceComplexity: O(1)

// User function Template for Java

class Solution {
    public int maxPoint(int k, int[] arr1, int[] arr2) {
        // code
        int n=arr1.length;
        long ans=-1;
        for(int i=0;i<n;i++){
            int val=k/arr1[i];
            ans=Math.max(ans,val*arr2[i]);
        }
        return (int)ans;
    }
}
