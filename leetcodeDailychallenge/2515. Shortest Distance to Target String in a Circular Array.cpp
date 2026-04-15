//problem link: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/?envType=daily-question&envId=2026-04-15
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        unordered_map<string,vector<int>>mpp;
        int n=words.size();
        for(int i=0;i<words.size();i++){
            mpp[words[i]].push_back(i);
        }
        int minLen=INT_MAX;
        if(mpp.find(target)!=mpp.end()){
            for(int indx: mpp[target]){
                int direct=abs(startIndex-indx);
                int circular=n-direct;
                minLen=min(minLen,min(direct,circular));
            }
        }
        return minLen==INT_MAX?-1:minLen;
    }
};