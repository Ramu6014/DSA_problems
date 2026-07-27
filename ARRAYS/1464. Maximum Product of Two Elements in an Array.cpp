//problem link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/?envType=daily-question&envId=2026-07-27
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int largest=INT_MIN;
        int secondLar=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                secondLar=largest;
                largest=nums[i];
            }
            else if(nums[i]>secondLar){
                secondLar=nums[i];
            }
        }
        return (largest-1)*(secondLar-1);
    }
};