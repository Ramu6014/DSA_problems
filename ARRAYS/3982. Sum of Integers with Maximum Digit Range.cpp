//problem link: https://leetcode.com/problems/sum-of-integers-with-maximum-digit-range/
//timeComplexity: o(nlog(m))
//spaceComplexity: O(1)

class Solution {
private:
    int findRange(int n){
        int large=INT_MIN;
        int small=INT_MAX;
        while(n>0){
            int rem=n%10;
            large=max(large,rem);
            small=min(small,rem);
            n/=10;
        }
        return large-small;
    }
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        int maxDg=-1;
        for(int i=0;i<n;i++){
            maxDg=max(findRange(nums[i]),maxDg);
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            int val=findRange(nums[i]);
            if(val==maxDg){
                sum+=nums[i];
            }
        }
        return (int)sum;
    }
};