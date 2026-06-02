//problem link: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/?envType=daily-question&envId=2026-06-02
//timeComplexity: O(n*m)
//spaceComplexity: O(1)

class Solution {
    public int earliestFinishTime(int[] landStartTime, int[] landDuration, int[] waterStartTime, int[] waterDuration) {
        int mini=Integer.MAX_VALUE;
        //landFirst
        for(int i=0;i<landStartTime.length;i++){
            int landTime=landStartTime[i]+landDuration[i];
            for(int j=0;j<waterStartTime.length;j++){
                int waterTime=0;
                if(waterStartTime[j]<=landTime){
                    waterTime=landTime+waterDuration[j];
                }
                else{
                    waterTime=waterStartTime[j]+waterDuration[j];
                }
                mini=Math.min(mini,waterTime);
            }
        }
        //waterFirst
        for(int i=0;i<waterStartTime.length;i++){
            int waterTime=waterStartTime[i]+waterDuration[i];
            for(int j=0;j<landStartTime.length;j++){
                int landTime=0;
                if(landStartTime[j]<=waterTime){
                    landTime=waterTime+landDuration[j];
                }
                else{
                    landTime=landStartTime[j]+landDuration[j];
                }
                mini=Math.min(mini,landTime);
            }
        }
        return mini;
    }
}