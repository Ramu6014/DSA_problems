//problem link: https://leetcode.com/problems/find-the-highest-altitude/?envType=daily-question&envId=2026-06-19
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
    public int largestAltitude(int[] gain) {
        int n=gain.length;
        int sum=0;
        int maxAlt=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            maxAlt=Math.max(maxAlt,sum);
        }
        return maxAlt;
    }
}