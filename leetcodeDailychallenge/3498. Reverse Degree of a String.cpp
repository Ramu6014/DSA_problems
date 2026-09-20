//problem link: https://leetcode.com/problems/reverse-degree-of-a-string/?envType=daily-question&envId=2026-09-20
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            // cout<<s[i]-'a'<<" ";
            sum=sum+(i+1)*(26-(s[i]-'a'));
        }
        return sum;
    }
};