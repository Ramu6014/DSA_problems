//problem Link: https://leetcode.com/problems/construct-uniform-parity-array-ii/
//TimeComplexity: O(nlogn)
//spaceComplexity: O(1)
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int mini=nums1[0];
        int target=mini%2;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=target && (nums1[i]-mini)%2!=target){
                return false;
            }
        }
        return true;
    }
};