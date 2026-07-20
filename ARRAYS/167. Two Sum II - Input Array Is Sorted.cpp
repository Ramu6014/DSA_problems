//problem link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0,j=n-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                return {i+1,j+1};
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {-1,-1};
    }
};
