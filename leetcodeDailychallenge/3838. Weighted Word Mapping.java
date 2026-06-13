//problem link: https://leetcode.com/problems/weighted-word-mapping/?envType=daily-question&envId=2026-06-13
//timeComplexity: O(n*m)
//spaceComplexity: o(1)

class Solution {
    public String mapWordWeights(String[] words, int[] weights) {
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<words.length;i++){
            String s=words[i];
            int sum=0;
            for(int j=0;j<s.length();j++){
                sum+=weights[s.charAt(j)-'a'];
            }
            int val=sum%26;
            char ch=(char)(122-val);
            sb.append(ch);
        }
        return sb.toString();
    }
}