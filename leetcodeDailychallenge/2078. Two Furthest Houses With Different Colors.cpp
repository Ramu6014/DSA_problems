//problem link: https://leetcode.com/problems/two-furthest-houses-with-different-colors/?envType=daily-question&envId=2026-04-20
//timeComplexity: o(n^2)
//spaceComplexity: O(1)

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDist=INT_MIN;
        for(int i=0;i<colors.size();i++){
            for(int j=i+1;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    maxDist=max(maxDist,abs(i-j));
                }
            }
        }
        return maxDist;
    }
};