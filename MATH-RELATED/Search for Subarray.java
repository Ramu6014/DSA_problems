//problem link: https://www.geeksforgeeks.org/problems/count-total-digits-in-a-number/1
//timeComplexity: O(log(k))
//spaceComplexity: O(1)

class Solution {
    public static int countDigits(int n) {
        // Code here
        int cnt=0;
        while(n>0){
            cnt++;
            n/=10;
        }
        return cnt;
    }
}
