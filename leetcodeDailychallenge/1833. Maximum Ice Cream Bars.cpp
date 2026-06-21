//problem link: https://leetcode.com/problems/maximum-ice-cream-bars/
//timeComplexity: O(nlogn)
//spaceComplexity: O(1)

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(costs[i]<=coins){
                cnt++;
                coins-=costs[i];
            }
            else{
                break;
            }
        }
        return cnt;
    }
};