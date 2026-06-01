//problem link: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/?envType=daily-question&envId=2026-06-01
//timeComplexity: o(nlogn)
//spaceComplexity: o(1)

class Solution {
    public int minimumCost(int[] cost) {
        int n=cost.length;
        Arrays.sort(cost);
        int sum=0;
        if(n<=2){
            for(int i=0;i<n;i++){
                sum+=cost[i];
            }
            return sum;
        }
        int indx=n-2;
        while(indx>=0){
            int st=indx;
            int end=indx+1;
            sum=sum+cost[st]+cost[end];
            indx-=3;
            if(indx<0){
                st-=2;
                if(st>=0){
                    sum+=cost[st];
                    st--;
                }
            }
        }
        return sum;
    }
}