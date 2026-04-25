//problem link: https://leetcode.com/problems/find-if-digit-game-can-be-won/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single=0,doubled=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>9){
                doubled+=nums[i];
            }
            else{
                single+=nums[i];
            }
        }
        if(single>doubled || doubled>single){
            return true;
        }
        return false;
    }
};