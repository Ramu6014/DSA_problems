//problem link: https://leetcode.com/problems/perfect-number/
//timeComplexity: O(sqrt(n))
//spaceComplexity: O(1)

class Solution {
    public boolean checkPerfectNumber(int num) {
        if(num==1){
            return false;
        }
        long sum=0;
        for(int i=1;i*i<=num;i++){
            if(num%i==0){
                sum+=i;
                if(num/i != i && num/i != num){
                    sum+=num/i;
                }
            }
        }
        return num==(int)sum;
    }
}