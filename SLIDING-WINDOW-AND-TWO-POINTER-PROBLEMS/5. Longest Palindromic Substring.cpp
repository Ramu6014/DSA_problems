//problem link: https://leetcode.com/problems/longest-palindromic-substring/
//timeComplexity: O(n^2)
//spaceComplexity: o(1)

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int stIndx=-1;
        int len=0;
        for(int i=0;i<n;i++){
            int left=i,right=i;
            while(left>=0 && right<n && s[left]==s[right]){
                if((right-left+1)>len){
                    len=right-left+1;
                    stIndx=left;
                }
                left--,right++;
            }
            left=i,right=i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                if((right-left+1)>len){
                    len=right-left+1;
                    stIndx=left;
                }
                left--,right++;
            }
        }
        return s.substr(stIndx,len);
    }
};