//problem link: https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/?envType=daily-question&envId=2026-05-21
//timeComplexity: O(N∗D+M∗D)
//spaceComplexity: O(N∗D)

class Solution {
    public int longestCommonPrefix(int[] arr1, int[] arr2) {
        int n1=arr1.length;
        int n2=arr2.length;
        HashSet<String>st=new HashSet<>();
        for(int i=0;i<n1;i++){
            String s1=String.valueOf(arr1[i]);
            String temp="";
            
            for(int j=0;j<s1.length();j++){
                temp+=s1.charAt(j);
                st.add(temp);
            }
        }
        int maxLen=0;
        for(int i=0;i<n2;i++){
            String s2=String.valueOf(arr2[i]);
            String temp="";
            for(int j=0;j<s2.length();j++){
                temp+=s2.charAt(j);
                if(st.contains(temp)){
                    maxLen=Math.max(maxLen,temp.length());
                }
                else{
                    break;
                }
            }
        }
        return maxLen;
    }
}