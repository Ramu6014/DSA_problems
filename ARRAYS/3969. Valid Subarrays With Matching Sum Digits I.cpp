//problem link: https://leetcode.com/problems/valid-subarrays-with-matching-sum-digits-i/
//timeComplexity: O(n^2*log(s))
//spaceComplexity: O(1)

class Solution {
    public boolean isValid(long num,int x){
        int rem=-1;
        while(num>0){
            rem=(int)num%10;
            num/=10;
        }
        return rem==x;
    }
    public int countValidSubarrays(int[] nums, int x) {
        int n=nums.length;
        int cnt=0;
        for(int i=0;i<n;i++){
            long sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum%10==x){
                    if((sum>9 && isValid(sum,x)) || sum<=9){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
}