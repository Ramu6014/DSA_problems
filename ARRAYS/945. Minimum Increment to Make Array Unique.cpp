//problem link: https://leetcode.com/problems/minimum-increment-to-make-array-unique/
//timeComplexity: O(nlog(n))
//spaceComplexity: O(1)

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int moves=0;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]<1){
                int val=nums[i];
                nums[i]=nums[i-1]+1;
                moves+=nums[i]-val;
            }
        }
        return moves;
    }
};