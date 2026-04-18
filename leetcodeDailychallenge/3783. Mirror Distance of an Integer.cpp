//problem link: https://leetcode.com/problems/mirror-distance-of-an-integer/?envType=daily-question&envId=2026-04-18
//timeComplexity: O(log n)
//spaceComplexity: O(1)

class Solution {
public:
    int reverseFunc(long long x){
        long long sum=0;
        while(x>0){
            long long rem=x%10;
            sum=sum*10+rem;
            x/=10;
        }
        return sum;
    }
    int mirrorDistance(int n) {
        return abs(n-reverseFunc(n));
    }
};