//problem link: https://leetcode.com/problems/count-subarrays-with-even-odd-ratio-i/
//timeComplexity: o(n^2)
//spaceComplexity: o(1)

class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int evenCnt=0;
            int oddCnt=0;
            for(int j=i;j<n;j++){
                if(nums[j]%2==0){
                    evenCnt++;
                }
                else if(nums[j]%2!=0){
                    oddCnt++;
                }
                if(oddCnt!=0 && 1LL*evenCnt*b<=1LL*oddCnt*a){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};