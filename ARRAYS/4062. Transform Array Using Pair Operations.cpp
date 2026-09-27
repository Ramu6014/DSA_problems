//problem link: https://leetcode.com/problems/transform-array-using-pair-operations/
//timeComplexity: O(n)
//spaceComplexity: O(1)

    class Solution {
    public:
        bool canTransform(vector<int>& source, vector<int>& target) {
            long long sourceSum=0;
            long long targetSum=0;
            for(int i=0;i<source.size();i++){
                sourceSum+=source[i];
                targetSum+=target[i];
            }
            return sourceSum==targetSum;
        }
    };