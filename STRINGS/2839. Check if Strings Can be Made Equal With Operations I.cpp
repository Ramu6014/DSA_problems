//Problem Link: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/?envType=daily-question&envId=2026-03-29
//TimeComplexity: O(1)
//SpaceComplexity: O(1)
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i=0;
        while(i<2){
            if(s1[i]!=s2[i]){
                swap(s1[i],s1[i+2]);
            }
            i++;
        }
        return s1==s2;
    }
};