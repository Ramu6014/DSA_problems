//problem link: https://leetcode.com/problems/sum-of-compatible-numbers-in-range-i/
//timeComplexity: O(n+k)
//spaceComplexity: o(1)

class Solution {
    public int sumOfGoodIntegers(int n, int k) {
        int i=Math.max(1,n-k);
        int j=n+k;
        int sum=0;
        while(i<=j){
            int val=Math.abs(n-i);
            if(val<=k && (n&i)==0){
                sum+=i;
            }
            i++;
        }
        return sum;
    }
}