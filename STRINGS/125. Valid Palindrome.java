//problem link: https://leetcode.com/problems/valid-palindrome/
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
    public boolean isPalindrome(String s) {
        int n=s.length();
        String temp="";
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            if(ch!=' ' && Character.isLetterOrDigit(ch)){
                temp+=Character.toLowerCase(ch);
            }
        }
        int i=0;
        int j=temp.length()-1;
        while(i<j){
            if(temp.charAt(i) != temp.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}