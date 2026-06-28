//problem link: https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]<1){
                int val=nums[i];
                nums[i]=nums[i-1]+1;
                cnt+=nums[i]-val;
            }

        }
        return cnt;
    }
};