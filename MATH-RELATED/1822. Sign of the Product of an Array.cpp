//problem link: https://leetcode.com/problems/sign-of-the-product-of-an-array/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negativeCount = 0;
    for (int num : nums) {
        if (num == 0) return 0;
        if (num < 0) negativeCount++;
    }
    return (negativeCount % 2 == 0) ? 1 : -1;
    }
};