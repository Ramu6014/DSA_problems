//problem link: https://leetcode.com/problems/longest-palindromic-substring/description/
//timeComplexity: O(n^2)
//spaceComplexity: o(1)

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int len=0;
        int stIndx=-1;
        int left,right;
        for(int i=0;i<n;i++){
            //odd length
            left=i,right=i;
            while(left>=0 && right<n && s[left]==s[right]){
                if(len<(right-left+1)){
                    len=right-left+1;
                    stIndx=left;
                }
                left--,right++;
            }
            //even length
            left=i,right=i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                if(len<(right-left+1)){
                    len=right-left+1;
                    stIndx=left;
                }
                left--,right++;
            }
        }
        return s.substr(stIndx,len);
    }
};