//problem link: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<int>st;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                flag=false;
                int indx=st.top();
                st.pop();
                reverse(s.begin()+indx+1,s.begin()+i);
            }
        }
        if(flag)return s;
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]==')'){
                continue;
            }
            res+=s[i];
        }
        return res;
    }
};