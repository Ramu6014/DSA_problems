//problem link: https://leetcode.com/problems/squares-of-a-sorted-array/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(nlogn)
//spaceComplexity: O(1)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};