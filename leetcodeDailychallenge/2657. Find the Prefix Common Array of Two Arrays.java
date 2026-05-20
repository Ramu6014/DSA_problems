//problem link: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/?envType=daily-question&envId=2026-05-20
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int n=A.length;
        HashMap<Integer,Integer>freq=new HashMap<>();
        int cnt=0;
        int ans[]=new int[n];
        for(int i=0;i<n;i++){
            freq.put(A[i],freq.getOrDefault(A[i],0)+1);
            if(freq.get(A[i])==2){
                cnt++;
            }
            freq.put(B[i],freq.getOrDefault(B[i],0)+1);
            if(freq.get(B[i])==2){
                cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
    }
}