//problem link: https://leetcode.com/problems/koko-eating-bananas/
//timeComplexity: O(n*log(maxi))
//spaceComplexity: O(1)

class Solution {
    public long findHours(int []piles,long hours){
        long reqHours=0;
        for(int i=0;i<piles.length;i++){
            reqHours+=(long)Math.ceil((double)piles[i]/hours);
        }
        return reqHours;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int n=piles.length;
        long maxEl=-1;
        for(int i=0;i<n;i++){
            if(piles[i]>maxEl){
                maxEl=piles[i];
            }
        }
        long low=1,high=maxEl;
        int ans=-1;
        while(low<=high){
            long mid=low+(high-low)/2;
            long reqHours=findHours(piles,mid);
            if(reqHours<=h){
                ans=(int)mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
}