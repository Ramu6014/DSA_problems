//problem link: https://leetcode.com/problems/minimum-common-value/?envType=daily-question&envId=2026-05-19
//timeComplexity: O(n1+n2)
//spaceComplexity: o(1)

class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        int n1=nums1.length;
        int n2=nums2.length;
        int indx1=0,indx2=0;
        while(indx1<n1 && indx2<n2){
            if(nums1[indx1]==nums2[indx2]){
                return nums1[indx1];
            }
            else if(nums1[indx1]<nums2[indx2]){
                indx1++;
            }
            else{
                indx2++;
            }
        }
        return -1;   
    }
}