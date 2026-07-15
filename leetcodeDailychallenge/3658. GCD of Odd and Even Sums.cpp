//problem link: https://leetcode.com/problems/gcd-of-odd-and-even-sums/?envType=daily-question&envId=2026-07-15
//timeComplexity: O(n)+O(log(min(n1,n2)))
//spaceComplexity: O(1)

class Solution {
    int gcd(int n1,int n2){
        if(n1==0){
            return n2;
        }
        return gcd(n2%n1,n1);
    }
public:
    int gcdOfOddEvenSums(int n) {
        int odd=1;
        int even=2;
        int oddSum=0,evenSum=0;
        for(int i=0;i<n;i++){
            oddSum+=odd;
            odd+=2;
            evenSum+=even;
            even+=2;
        }
        return gcd(oddSum,evenSum);
    }
};