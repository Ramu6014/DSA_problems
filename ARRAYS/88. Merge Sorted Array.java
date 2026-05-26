//problem link: https://leetcode.com/problems/merge-sorted-array/
//timeComplexity: O(m+n)
//spaceComplexity: o(m+n)

class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int l=0;
        int r=0;
        int temp[]=new int[m+n];
        int indx=0;
        while(l<m && r<n){
            if(nums1[l]<=nums2[r]){
                temp[indx++]=nums1[l];
                l++;
            }
            else{
                temp[indx++]=nums2[r];
                r++;
            }
        }
        while(l<m){
            temp[indx++]=nums1[l];
                l++;
        }
        while(r<n){
            temp[indx++]=nums2[r];
            r++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=temp[i];
        }
        return;
    }
}