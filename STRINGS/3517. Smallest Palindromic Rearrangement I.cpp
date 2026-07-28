//problem link: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/?envType=daily-question&envId=2026-07-28
//timeComplexity: o(nlogn)
//spaceComplexity: o(n)

class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1){
            return s;
        }
        string first;
        string second;
        first=s.substr(0,(n/2));
        sort(first.begin(),first.end());
        second=first;
        if(n%2!=0){
            first+=s[n/2];
            reverse(second.begin(),second.end());
        }
        else{
            reverse(second.begin(),second.end());
        }
        return first+second;
    }
};