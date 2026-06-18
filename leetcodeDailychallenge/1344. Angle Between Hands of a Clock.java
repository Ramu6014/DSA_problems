//problem link: https://leetcode.com/problems/angle-between-hands-of-a-clock/
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
    public double angleClock(int hour, int minutes) {
        double ans=Math.abs(30*hour-(11/2.0)*minutes);
        return Math.min(ans,360-ans);
    }
}