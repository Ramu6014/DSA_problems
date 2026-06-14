//problem link: https://leetcode.com/problems/check-good-integer/
//timeComplexity: O(d)
//spaceComplexity: O(1)

class Solution {
    public boolean checkGoodInteger(int n) {
        int sqSum=0;
        int digSum=0;
        while(n>0){
            int rem=n%10;
            digSum+=rem;
            sqSum+=rem*rem;
            n/=10;
        }
        return (sqSum-digSum)>=50;
    }
}