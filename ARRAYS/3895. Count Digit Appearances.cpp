//problem link: https://leetcode.com/problems/count-digit-appearances/
//timeComplexity: O(n*k)
//spaceComplexity: O(1)

class Solution {
public:
    int findAppearance(int x,int digit){
        int cnt=0;
        while(x>0){
            int rem=x%10;
            if(digit==rem){
                cnt++;
            }
            x/=10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt+=findAppearance(nums[i],digit);
        }
        return cnt;
    }
};