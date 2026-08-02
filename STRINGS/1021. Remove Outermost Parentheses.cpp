//problem link: https://leetcode.com/problems/remove-outermost-parentheses/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int n=s.size();
        int stIndx=0;
        int openCnt=0,closedCnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                openCnt++;
            }
            if(s[i]==')'){
                closedCnt++;
            }
            if(openCnt==closedCnt){
                res+=s.substr(stIndx+1,i-stIndx-1);
                stIndx=i+1;
                openCnt=0,closedCnt=0;
            }
        }
        return res;
    }
};