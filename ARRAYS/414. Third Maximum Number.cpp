//problem link: https://leetcode.com/problems/third-maximum-number/?envType=problem-list-v2&envId=array
//timeComplexity: O(n)
//spaceComplexity: o(1)

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long long firstLar=LLONG_MIN;
        long long secondLar=LLONG_MIN;
        long long thirdLar=LLONG_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>firstLar){
                thirdLar=secondLar;
                secondLar=firstLar;
                firstLar=nums[i];
            }
            else if(nums[i]>secondLar && nums[i]!=firstLar){
                thirdLar=secondLar;
                secondLar=nums[i];
            }
            else if(nums[i]>thirdLar && nums[i]!=firstLar && nums[i]!=secondLar){
                thirdLar=nums[i];
            }
        }
        if(n<3)return (int)firstLar;
        return thirdLar==LLONG_MIN?(int)firstLar:(int)thirdLar;
    }
};