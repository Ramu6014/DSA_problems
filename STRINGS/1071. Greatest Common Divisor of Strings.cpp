//problem link: https://leetcode.com/problems/greatest-common-divisor-of-strings/
//timeComplexity:  O(n+m)
//spaceComplexity: O(1)

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1){
            return "";
        }
        int len=__gcd(str1.size(),str2.size());
        return str1.substr(0,len);
    }
};