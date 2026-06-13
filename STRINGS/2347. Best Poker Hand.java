//problem link: https://leetcode.com/problems/best-poker-hand/
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
    public String bestHand(int[] ranks, char[] suits) {
        HashMap<Character,Integer>suitFreq=new HashMap<>();
        HashMap<Integer,Integer>rankFreq=new HashMap<>();
        for(int i=0;i<suits.length;i++){
            suitFreq.put(suits[i],suitFreq.getOrDefault(suits[i],0)+1);
            rankFreq.put(ranks[i],rankFreq.getOrDefault(ranks[i],0)+1);
        }
        if(suitFreq.size()==1){
            return "Flush";
        }
        for(Map.Entry<Integer,Integer>it: rankFreq.entrySet()){
            if(it.getValue()>=3){
                return "Three of a Kind";
            }
        }
        for(Map.Entry<Integer,Integer>it: rankFreq.entrySet()){
            if(it.getValue()==2){
                return "Pair";
            }
        }
        return "High Card";
    }
}