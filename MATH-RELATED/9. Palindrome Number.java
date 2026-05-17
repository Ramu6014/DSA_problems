//problem link: https://leetcode.com/problems/palindrome-number/
//timeComplexity: o(log(k))
//spaceComplexity: O(1)

class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num=x;
        long sum=0;
        while(num>0){
            int rem=num%10;
            sum=sum*10+rem;
            num/=10;
        }
        return x==(int)sum?true:false;
    }
}