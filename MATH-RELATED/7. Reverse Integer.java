//problem link: https://leetcode.com/problems/reverse-integer/description/
//timeComplexity: O(log(k))
//spaceComplexity: O(1)

class Solution {
    public int reverse(int x) {
        boolean sign=true;
        if(x<0){
            sign=false;
        }
        int n=Math.abs(0-x);
        long sum=0;
        while(n>0){
            int rem=n%10;
            sum=sum*10+rem;
            n/=10;
            if(sum>=Integer.MAX_VALUE){
                return 0;
            }
        }
        return sign==true?(int)sum:0-(int)sum;
    }
}