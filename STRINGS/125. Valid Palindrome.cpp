//problem link: https://leetcode.com/problems/valid-palindrome/
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int left=0,right=n-1;
        while(left<right){
            while(left<right && (s[left]==' ' || !isalnum(s[left])))left++;
            while(left<right && (s[right]==' '|| !isalnum(s[right])))right--;
            if(left<right && tolower(s[left])!=tolower(s[right]))return false;
            left++,right--;
        }
        return true;
    }
};