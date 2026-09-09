//problem link: https://leetcode.com/problems/string-to-integer-atoi/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    int func(int indx,long long &sum,string &s){
        if(indx>=s.size()||sum>INT_MAX||!isdigit(s[indx]))return sum;
        sum=sum*10+s[indx]-'0';
        return func(indx+1,sum,s);
    }
public:
    int myAtoi(string s) {
        int indx=0;
        int n=s.size();
        //whitespace
        while(indx<n && s[indx]==' ')indx++;
        bool  pos=true;
        if(s[indx]=='-'||s[indx]=='+'){
            pos=s[indx]=='+'?true:false;
            indx++;
        }
        //leadingZeroes
        while(s[indx]=='0')indx++;
        long long sum=0;
        func(indx,sum,s);
        if(pos==true){
            return sum>=INT_MAX?INT_MAX:(int)sum;
        }
        return -sum<INT_MIN?INT_MIN:(int)(0-sum);
    }
};