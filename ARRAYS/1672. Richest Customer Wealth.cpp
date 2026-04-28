//problem link: https://leetcode.com/problems/richest-customer-wealth/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n*m)
//spaceComplexity: O(1)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum=0;
        int sum=0;
        for(int i=0;i<accounts.size();i++){
            sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
};