//problem link: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n*k)
//spaceComplexity: O(1)

class Solution {
public:
    int digitSum(int x){
        int sum=0;
        while(x>0){
            int rem=x%10;
            sum+=rem;
            x/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int digit=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            digit+=digitSum(nums[i]);
        }
        return abs(sum-digit);
    }
};