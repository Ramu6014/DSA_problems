//problem link: https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
    public char getMaxOccuringChar(String s) {
        // code here
        int n=s.length();
        HashMap<Character,Integer>freq=new HashMap<>();
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            freq.put(ch,freq.getOrDefault(ch,0)+1);
        }
        int maxi=Integer.MIN_VALUE;
        char ch='a';
        for(Map.Entry<Character,Integer>it: freq.entrySet()){
         if(it.getValue()>maxi){
             maxi=it.getValue();
             ch=it.getKey();
         }
         else if(it.getValue() == maxi && it.getKey()<ch){
             ch=it.getKey();
         }
        }
        return ch;
    }
}