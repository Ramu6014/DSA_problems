//problem link: https://www.geeksforgeeks.org/problems/npr4253/1
//timeComplexity: o(r)
//spaceComplexity: O(1)

class Solution {
    static long nPr(long n, long r) {

        long ans = 1;

        for(long i = 0; i < r; i++) {
            ans = ans * (n - i);
        }

        return ans;
    }
}