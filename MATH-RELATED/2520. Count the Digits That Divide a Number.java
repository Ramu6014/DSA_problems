//problem link: https://leetcode.com/problems/count-the-digits-that-divide-a-number/
//timeComplexity: O(log(k))
//spaceComplexity: O(1)

class Solution {
    public int countDigits(int num) {
        int x=num;
        int cnt=0;
        while(x>0){
            int rem=x%10;
            if(num%rem==0){
                cnt++;
            }
            x/=10;
        }
        return cnt;
    }
}