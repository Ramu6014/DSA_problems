//problem link: https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/
//timeComplexity: o(logn)
//spaceComplexity: o(logn)

class Solution {
    public boolean consecutiveSetBits(int n) {
        StringBuilder ans=new StringBuilder();
        while(n>0){
            int rem=n%2;
            ans.append((char)(rem+'0'));
            n/=2;
        }
        if(ans.length()<=1){
            return false;
        }
        int cnt=0;
        for(int i=1;i<ans.length();i++){
            if(ans.charAt(i)=='1' && ans.charAt(i)==ans.charAt(i-1)){
                cnt++;
            }
        }
        return cnt==1;
    }
}