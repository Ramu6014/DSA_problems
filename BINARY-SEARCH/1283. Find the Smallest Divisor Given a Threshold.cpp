//problem link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
//timeComplexity: o(n*log(n))
//spaceComplexity: O(1)

class Solution {
private:
    bool isPossible(vector<int>&nums,int threshold,long long divisor){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/divisor);
        }
        return (int)sum<=threshold;
    }
private:
    int findHigh(vector<int>&nums){
      int maxi=INT_MIN;
      for(int i=0;i<nums.size();i++){
        maxi=max(maxi,nums[i]);
      }
      return maxi;  
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold){
        int n=nums.size();
        int low=1;
        int high=findHigh(nums);
        while(low<=high){
            long long mid=1LL*low+(1LL*high-low)/2;
            if(isPossible(nums,threshold,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};