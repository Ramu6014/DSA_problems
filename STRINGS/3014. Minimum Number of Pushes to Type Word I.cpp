//problem link: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/?envType=daily-question&envId=2026-07-31
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
public:
    int minimumPushes(string word){
        int n=word.size();
        int cost=0;
        for(int i=0;i<n;i++){
            cost+=(i/8)+1;
        }
        return cost;
    }
};