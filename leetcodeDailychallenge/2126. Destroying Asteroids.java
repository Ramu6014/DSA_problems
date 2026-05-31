//problem link: https://leetcode.com/problems/destroying-asteroids/?envType=daily-question&envId=2026-05-31
//timeComplexity: o(nlogn)
//spaceComplexity: O(1)

class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        int n=asteroids.length;
        Arrays.sort(asteroids);
        long sum=mass;
        for(int i=0;i<n;i++){
            if(sum>=asteroids[i]){
                sum+=asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
}