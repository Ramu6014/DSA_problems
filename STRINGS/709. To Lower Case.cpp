//problem link: https://leetcode.com/problems/to-lower-case/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
};