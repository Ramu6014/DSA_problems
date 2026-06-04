//problem link: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/?envType=daily-question&envId=2026-06-04
//timeComplexity: O(n*k)
//spaceComplexity: O(1)

class Solution {
    public int findWaves(String s){
        if(s.length()<3){
            return 0;
        }
        int cnt=0;
        int j=s.length()-2;
        while(j>0){
            int left=s.charAt(j-1)-'0';
            int middle=s.charAt(j)-'0';
            int right=s.charAt(j+1)-'0';
            if(middle>left && middle>right){
                cnt++;
            }
            else if(middle<left && middle<right){
                cnt++;
            }
            j--;
        }
        return cnt;
    }
    public int totalWaviness(int num1, int num2) {
        int waviness=0;
        for(int i=num1;i<=num2;i++){
            String s=String.valueOf(i);
            waviness+=findWaves(s);
        }
        return waviness;
    }
}