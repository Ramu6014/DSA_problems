//problem link: https://leetcode.com/problems/is-subsequence/
//timeComplexity: o(max(n1,n2))
//spaceComplexity: O(1)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==s.size();
    }
};