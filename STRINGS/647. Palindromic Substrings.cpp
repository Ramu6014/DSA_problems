//problem link: https://leetcode.com/problems/palindromic-substrings/
//timeComplexity: O(n^2)
//spaceComplexity: O(1)

class Solution {
    int countPalindrome(int left,int right,string s){
        int cnt=0;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            cnt++;
            left--,right++;
        }
        return cnt;
    }
public:
    int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=countPalindrome(i,i,s);
            cnt+=countPalindrome(i,i+1,s);
        }
        return cnt;
    }
};