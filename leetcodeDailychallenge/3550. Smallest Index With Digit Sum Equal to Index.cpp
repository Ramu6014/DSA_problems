//problem link: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/?envType=daily-question&envId=2026-09-24
//timeComplexity: O(nlog(n))
//spaceComplexity: O(1)

class Solution {
    int digitSum(int x){
        int  sum=0;
        while(x!=0){
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==digitSum(nums[i])){
                return i;
            }
        }
        return -1;
    }
};