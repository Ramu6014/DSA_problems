//problem link: https://leetcode.com/problems/maximum-total-sum-of-k-selected-elements/
//timeComplexity: O(nlog(n))
//spaceComplexity: o(1)

class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            if(k==0){
                break;
            }
            if(mul>0){
                sum=sum+1LL*nums[i]*mul;
                mul--;
            }
            else{
                sum+=nums[i];
            }
            k--;
        }
        return sum;
    }
};