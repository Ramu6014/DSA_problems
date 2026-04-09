//problem link: https://leetcode.com/problems/string-to-integer-atoi/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    int helper(int indx,string &s,int ans,int sign){
        if(indx==s.size() || !(isdigit(s[indx]))){
            if(sign){
                return sign*ans;
            }
            return  sign*ans;
        }
        int digit=s[indx]-'0';
         if (ans > (INT_MAX - digit) / 10) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        ans=ans*10+digit;
        return helper(indx+1,s,ans,sign);
    }
    int func(string &s){
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<s.size() && (s[i]=='+' || s[i]=='-')){
           sign=(s[i]=='-')?-1:1;
           i++;
        }
        return helper(i,s,0,sign);
    }
    int myAtoi(string s) {
        return func(s);
    }
};
