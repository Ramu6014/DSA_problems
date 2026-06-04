//problem link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
    public boolean checkIfPangram(String sentence) {
        int n=sentence.length();
        HashSet<Character>st=new HashSet<>();
        for(int i=0;i<n;i++){
            char ch=sentence.charAt(i);
            st.add(ch);
        }
        return st.size()==26;
    }
}