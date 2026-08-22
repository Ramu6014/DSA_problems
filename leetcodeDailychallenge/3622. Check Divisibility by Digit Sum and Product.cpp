//problem link: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/?envType=daily-question&envId=2026-08-22
//timeComplexity: O(logn)
//spaceComplexity: O(1)

class Solution {
public:
    bool checkDivisibility(int n) {
        int sumDigits=0;
        int productDigits=1;
        int x=n;
        while(x>0){
            int rem=x%10;
            sumDigits+=rem;
            productDigits*=rem;
            x/=10;
        }
        return n%(sumDigits+productDigits)==0;
    }
};