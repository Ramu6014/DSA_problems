//problem link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
    public int[] replaceElements(int[] arr) {
        int n=arr.length;
        int maxi=Integer.MIN_VALUE;
        maxi=Math.max(maxi,arr[n-1]);
        for(int i=n-2;i>=0;i--){
            int val=arr[i];
            arr[i]=maxi;
            maxi=Math.max(maxi,val);
        }
        arr[n-1]=-1;
        return arr;
    }
}