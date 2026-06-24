//problem link: https://leetcode.com/problems/maximum-product-subarray/
//timeComplexity: O(n)
//spaceComplexity: o(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxPr=INT_MIN;
        int leftPr=1;
        int rightPr=1;
        for(int i=0;i<n;i++){
            leftPr*=nums[i];
            maxPr=max(maxPr,leftPr);
            if(nums[i]==0){
                leftPr=1;
            }
        }
        for(int i=n-1;i>=0;i--){
            rightPr*=nums[i];
            maxPr=max(maxPr,rightPr);
            if(nums[i]==0){
                rightPr=1;
            }
        }
        return maxPr;
    }
};