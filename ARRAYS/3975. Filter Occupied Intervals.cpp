//problem link: https://leetcode.com/problems/filter-occupied-intervals/
//timeComplexity:  O(nlog(n))
//spaceComplexity: O(n)

class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(),occupiedIntervals.end());
        int n=occupiedIntervals.size();
        vector<vector<int>>merged;
        merged.push_back(occupiedIntervals[0]);
        for(int i=1;i<n;i++){
            if(merged.back()[1]>=occupiedIntervals[i][0] || merged.back()[1]+1==occupiedIntervals[i][0]){
                merged.back()[1]=max(merged.back()[1],occupiedIntervals[i][1]);
            }
            else{
                merged.push_back(occupiedIntervals[i]);
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<merged.size();i++){
            int st=merged[i][0];
            int end=merged[i][1];
            if(end<freeStart || st>freeEnd){
                ans.push_back(merged[i]);
                continue;
            }
            if(st<freeStart){
                ans.push_back({st,freeStart-1});
            }
            if(end>freeEnd){
                ans.push_back({freeEnd+1,end});
            }
        }
        return ans;
    }
};