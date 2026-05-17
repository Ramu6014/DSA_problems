//problem link: https://leetcode.com/problems/check-adjacent-digit-differences/
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
    public boolean isAdjacentDiffAtMostTwo(String s) {
        int n=s.length();
        for(int i=1;i<n;i++){
            int a=s.charAt(i);
            int b=s.charAt(i-1);
            if(Math.abs(a-b)>2){
                return false;
            }
        }
        return true;
    }
}