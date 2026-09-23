//problem link: https://leetcode.com/problems/number-of-intersecting-interval-pairs-i/
//timeComplexity: o(n^2)
//spaceComplexity: O(1)

class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int cnt=0;
        for(int i=0;i<intervals.size();i++){
        int st=intervals[i][0],end=intervals[i][1];
        for(int j=i+1;j<intervals.size();j++){
            if(intervals[j][0]<=end){
                cnt++;
            }
        }
        }
        return cnt;
    }
};