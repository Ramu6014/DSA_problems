//problem link: https://leetcode.com/problems/product-of-array-except-self/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int suffix[n];
        int suffPr = 1;
        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffPr;
            suffPr *= nums[i];
        }
        int preffPr = 1;

        for (int i = 0; i < n; i++) {
            ans.push_back(preffPr * suffix[i]);
            preffPr *= nums[i];
        }
        return ans;
    }
};
