//problem Link: https://leetcode.com/problems/construct-uniform-parity-array-i/description/
//TimeComplexity: O(n)
//spaceComplexity: O(1)
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int oddCnt=0,evenCnt=0;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]&1){
                oddCnt++;
            }
            else{
                evenCnt++;
            }
        }
        if(oddCnt==n||evenCnt==n||oddCnt==evenCnt){
            return true;
        }
        return true;
    }
};