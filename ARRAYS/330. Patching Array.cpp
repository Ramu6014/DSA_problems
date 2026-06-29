//problem link: https://leetcode.com/problems/patching-array/
//timeComplexity: o(n+log(m))
//spaceComplexity: O(1)

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int patch=0;
        long long moves=1;
        int i=0;
        while(moves<=n){
            if(i<nums.size() && nums[i]<=moves){
                moves+=nums[i];
                i++;
            }
            else{
                patch++;
                moves+=moves;
            }
        }
        return patch;
    }
};