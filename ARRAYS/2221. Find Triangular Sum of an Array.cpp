//problem link: https://leetcode.com/problems/find-triangular-sum-of-an-array/?envType=problem-list-v2&envId=combinatorics
//timeCompelxity: O(n^2)
//spaceComplexity: O(n)

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        while(1){
            int n=nums.size();
            vector<int>temp;
            for(int i=1;i<n;i++){
                temp.push_back((nums[i]+nums[i-1])%10);
            }
            if(temp.size()==1){
                return temp[0];
            }
            nums=temp;
        }
        return -1;
    }
};