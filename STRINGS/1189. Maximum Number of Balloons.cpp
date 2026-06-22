//problem link: https://leetcode.com/problems/maximum-number-of-balloons/?envType=daily-question&envId=2026-06-22
//timeComplexity: O(n*k)
//spaceComplexity: O(1)

class Solution {
    public int maxNumberOfBalloons(String text) {
        int n=text.length();
        HashMap<Character,Integer>freq=new HashMap<>();
        for(int i=0;i<n;i++){
            char ch=text.charAt(i);
            if(ch=='b'||ch=='a'||ch=='l'||ch=='o'||ch=='n'){
                freq.put(ch,freq.getOrDefault(ch,0)+1);
            }
        }
        if(freq.size()<5){
            return 0;
        }
        int cnt=0;
        while(true){
            if(freq.get('l')<2 || freq.get('o')<2){
                break;
            }
            if(freq.get('b')==0||freq.get('a')==0||freq.get('n')==0){
                break;
            }
            for(Map.Entry<Character,Integer>it: freq.entrySet()){
                if(it.getKey()=='l' || it.getKey()=='o'){
                    freq.put(it.getKey(),it.getValue()-2);
                }
                else{
                freq.put(it.getKey(),it.getValue()-1);
                }
            }
            cnt++;
        }
        return cnt;
    }
}