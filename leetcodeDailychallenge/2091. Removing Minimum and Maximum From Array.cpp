//problem link: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/?envType=daily-question&envId=2026-08-30
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int minIndx=-1;
        int maxIndx=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                maxIndx=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                minIndx=i;
            }
        }
        int leftMinIndx=minIndx+1;
        int leftMaxIndx=maxIndx+1;
        int rightMinIndx=n-minIndx;
        int rightMaxIndx=n-maxIndx;
        return min(min(max(leftMinIndx,leftMaxIndx),max(rightMinIndx,rightMaxIndx)),min(leftMinIndx,leftMaxIndx)+min(rightMinIndx,rightMaxIndx));
    }
};