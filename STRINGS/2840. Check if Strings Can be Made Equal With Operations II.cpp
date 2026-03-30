//Problem Link: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/?envType=daily-question&envId=2026-03-30
//TimeComplexity: O(n)
//SpaceComplexity: O(1)
class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.size();
        vector<int>even(26,0),odd(26,0);
        for(int i=0;i<n;i++){
            if(i%2==0){
                even[s1[i]-'a']++;
                even[s2[i]-'a']--;
            }
            else{
                odd[s1[i]-'a']++;
                odd[s2[i]-'a']--;
            }
        }
        for(int i=0;i<26;i++){
            if(even[i]!=0){
                return false;
            }
            if(odd[i]!=0){
                return false;
            }
        }
        return true;
    }
};