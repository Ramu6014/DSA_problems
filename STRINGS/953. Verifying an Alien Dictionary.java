//problem link: https://leetcode.com/problems/verifying-an-alien-dictionary/description/
//timeComplexity: O(n*m)
//spaceComplexity: O(1)

class Solution {
    public boolean isAlienSorted(String[] words, String order) {
        HashMap<Character,Integer>freq=new HashMap<>();
        for(int i=0;i<order.length();i++){
            char ch=order.charAt(i);
            freq.put(ch,i);
        }
        for(int i=0;i<words.length-1;i++){
            String s1=words[i];
            String s2=words[i+1];
            if(s1.length()>s2.length() && s1.substring(0,s2.length()).equals(s2)){
                return false;
            }
            int len=Math.min(s1.length(),s2.length());
            for(int j=0;j<len;j++){
                char c1=s1.charAt(j);
                char c2=s2.charAt(j);
                if(c1!=c2){
                    if(freq.get(c1)>freq.get(c2)){
                        return false;
                    }
                    break;
                }
            }

        }
        return true;
    }
}