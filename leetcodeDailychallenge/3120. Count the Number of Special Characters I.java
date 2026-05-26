//problem link: https://leetcode.com/problems/count-the-number-of-special-characters-i/?envType=daily-question&envId=2026-05-26
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
    public int numberOfSpecialChars(String word) {
        int n=word.length();
        HashSet<Character>st=new HashSet<>();
        for(int i=0;i<n;i++){
            char ch=word.charAt(i);
            st.add(ch);
        }
        int cnt=0;
        for(char ch: st){
            if(Character.isLowerCase(ch)){
                char upper=Character.toUpperCase(ch);
                if(st.contains(upper)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
}