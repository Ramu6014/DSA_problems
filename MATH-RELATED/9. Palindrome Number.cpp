//problem link: https://leetcode.com/problems/palindrome-number/
//timeComplexity: o(log(n))
//spaceComplexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int num=x;
        long long sum=0;
        while(num!=0){
            sum=sum*10+(num%10);
            num/=10;
        }
        return (int)sum==x;
    }
};