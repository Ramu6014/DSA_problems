//problem link: https://leetcode.com/problems/count-the-number-of-special-characters-ii/?envType=daily-question&envId=2026-05-27
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
    public int numberOfSpecialChars(String word) {
        int n=word.length();
        HashMap<Character,Integer>freq=new HashMap<>();
        for(int i=0;i<n;i++){
            char ch=word.charAt(i);
            if(Character.isLowerCase(ch)){
                freq.put(ch,i);
            }
            else{
                if(!freq.containsKey(ch)){
                    freq.put(ch,i);
                }
            }
        }
        int cnt=0;
        for(Map.Entry<Character,Integer>it: freq.entrySet()){
             char ch=it.getKey();
             if(Character.isLowerCase(ch)){
                char capital=Character.toUpperCase(ch);
                    if(freq.containsKey(capital)){
                        int lowerIndx=it.getValue();
                        int upperIndx=freq.get(capital);
                        if(lowerIndx<upperIndx){
                            cnt++;
                        }
                    }
                }
            }
        return cnt;
    }
}