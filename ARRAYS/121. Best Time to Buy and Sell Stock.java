//problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//timeComplexity: O(n)
//spaceComplexity: o(1)

class Solution {
    public int maxProfit(int[] prices) {
     int n=prices.length;
     int mini=Integer.MAX_VALUE;
     int profit=0;
     for(int i=1;i<n;i++){
        mini=Math.min(mini,prices[i-1]);
        if(prices[i]>mini && (prices[i]-mini)>profit){
            profit=prices[i]-mini;
        }
     }
     return profit;   
    }
}