//problem link: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1
//timeComplexity: O(d)
//spaceComplexity: o(1)

// User function Template for Java
class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int x=n;
        long sum=0;
        while(x>0){
            int rem=x%10;
            sum=sum+(int)Math.pow(rem,3);
            x/=10;
        }
        return n==(int)sum;
    }
}