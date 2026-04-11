//problem link: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/?envType=daily-question&envId=2026-04-11
//timeComplexity: o(n^2)
//spaceComplexity: O(1)

class Solution {
public:
    int findIndx(int indx,int target,vector<int>&nums){
        for(int i=indx;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int minDist=INT_MAX;
        for(int i=0;i<n;i++){
            int second=findIndx(i+1,nums[i],nums);
            int third=-1;
            if(second!=-1){
                third=findIndx(second+1,nums[i],nums);
            }
            if(second!=-1 && third!=-1){
                int val=abs(i-second)+abs(second-third)+abs(third-i);
                minDist=min(val,minDist);
            }
        }
        return minDist==INT_MAX?-1:minDist;
    }
};