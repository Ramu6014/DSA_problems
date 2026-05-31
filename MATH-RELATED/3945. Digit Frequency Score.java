//problem link: https://leetcode.com/problems/digit-frequency-score/
//timeComplexity: O(k)
//spaceComplexity: O(k)

class Solution {
    public int digitFrequencyScore(int n) {
        HashMap<Integer,Integer>freq=new HashMap<>();
        int x=n;
        while(x>0){
            int rem=x%10;
            freq.put(rem,freq.getOrDefault(rem,0)+1);
            x/=10;
        }
        long sum=0;
        for(Map.Entry<Integer,Integer> it: freq.entrySet()){
            sum=sum+it.getKey()*it.getValue();
        }
        return (int)sum;
    }
}