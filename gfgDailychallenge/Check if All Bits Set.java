//problem link: https://www.geeksforgeeks.org/problems/check-set-bits5408/1
//timeComplexity: O(d)
//spaceComplexity: O(1)

class Solution {
    public boolean isBitSet(int n) {
        // code here
       if(n==0){
           return false;
       }
        int x=n;
        while(x>0){
            int rem=x%2;
            if(rem==0){
                return false;
            }
            x/=2;
        }
        return true;
    }
};