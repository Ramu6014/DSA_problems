//problem link: https://leetcode.com/problems/remove-covered-intervals/
//timeComplexity: O(n^2)
//spaceComplexity: o(1)

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int cnt=0;
        for(int i=0;i<intervals.size();i++){
            int st=intervals[i][0];
            int end=intervals[i][1];
            for(int j=0;j<intervals.size();j++){
                if(i==j) continue;
                if(intervals[j][0]<=st && end<=intervals[j][1]){
                    cnt++;
                    break;
                }
            }
        }
        return intervals.size()-cnt;
    }
};