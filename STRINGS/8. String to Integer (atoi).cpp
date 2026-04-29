//problem link: https://leetcode.com/problems/string-to-integer-atoi/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int myAtoi(string s) {
        bool sign=true;
        //removeSpace
        int indx=0;
        int n=s.size();
        while(indx<n && s[indx]==' '){
            indx++;
        }
        //signedness
        if(s[indx]=='-'||s[indx]=='+'){
            if(s[indx]=='-'){
                sign=false;
            }
            indx++;
        }
        //conversion
        long long sum=0;
        while(indx<n && isdigit(s[indx])){
            int x=s[indx]-'0';
            sum=sum*10+x%10;
            if(sum>INT_MAX){
                return sign==true?INT_MAX:INT_MIN;
            }
            if(sum<INT_MIN){
                return sign==true?INT_MAX:INT_MIN;
            }
            indx++;
        }
        return sign==true?sum:-sum;
    }
};

