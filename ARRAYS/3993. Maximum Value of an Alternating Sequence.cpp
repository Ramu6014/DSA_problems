//problem link: https://leetcode.com/problems/maximum-value-of-an-alternating-sequence/
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1){
            return s;
        }
        long long num=n/2;
        return 1LL*s+m+(num-1)*(m-1);
    }
};