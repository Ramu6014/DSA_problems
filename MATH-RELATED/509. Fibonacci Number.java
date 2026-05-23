//problem link: https://leetcode.com/problems/fibonacci-number/
//timeComplexity: O(2^n)
//spaceComplexity: O(n)

class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};