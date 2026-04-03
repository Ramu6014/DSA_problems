//problem link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,maxDepth=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            else if(s[i]==')'){
                cnt--;
            }
            maxDepth=max(maxDepth,cnt);
        }
        return maxDepth;
    }
};