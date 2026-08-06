//problem link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
//timeComplexity: O(k)
//spaceComplexity: O(1)

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int maxSum=0;
        int lSum=0,rSum=0;
        for(int i=0;i<k;i++){
            lSum+=cardPoints[i];
        }
        maxSum=lSum;
        int rightIndx=n-1;
        for(int i=k-1;i>=0;i--){
            lSum-=cardPoints[i];
            rSum+=cardPoints[rightIndx];
            rightIndx--;
            maxSum=max(maxSum,lSum+rSum);
        }
        return maxSum;
    }
};