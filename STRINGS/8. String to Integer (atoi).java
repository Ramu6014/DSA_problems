//problem link: https://leetcode.com/problems/string-to-integer-atoi/description/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
    public int myAtoi(String s) {
        int n=s.length();
        if(n==0)return 0;
        int indx=0;
        while(indx<n && s.charAt(indx)==' '){
            indx++;
        }
        boolean sign=true;
        if(indx<n && (s.charAt(indx)=='+'||s.charAt(indx)=='-')){
            sign=s.charAt(indx)=='+'?true:false;
            indx++;
        }
        long sum=0;
        while(indx<n && Character.isDigit(s.charAt(indx))){
            char ch=s.charAt(indx);
            int val=(int)(ch-'0');
            sum=sum*10+val;
            if(sum>Integer.MAX_VALUE){
                return sign==true?Integer.MAX_VALUE:Integer.MIN_VALUE;
            }
            indx++;
        }
        return sign==true?(int)sum:(int)(0-sum);
    }
}