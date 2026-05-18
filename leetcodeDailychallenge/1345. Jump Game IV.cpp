//problem link: https://leetcode.com/problems/jump-game-iv/?envType=daily-question&envId=2026-05-18
//timeCompelxity: O(n)
//spaceComplexity: O(n)

class Solution {
public:

    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>> freq;
        // store same value indices
        for(int i = 0; i < n; i++){
            freq[arr[i]].push_back(i);
        }
        vector<int> vis(n,0);
        queue<pair<int,int>> q;
        q.push({0,0});
        vis[0] = 1;
        while(!q.empty()){
            int node = q.front().first;
            int cnt = q.front().second;
            q.pop();
            if(node == n-1){
                return cnt;
            }
            // left  indx
            if(node-1 >= 0 && !vis[node-1]){
                vis[node-1] = 1;
                q.push({node-1,cnt+1});
            }
            // right indx
            if(node+1 < n && !vis[node+1]){
                vis[node+1] = 1;
                q.push({node+1,cnt+1});
            }
            // same value 
            for(auto it : freq[arr[node]]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push({it,cnt+1});
                }
            }
            // important optimization
            freq[arr[node]].clear();
        }
        return -1;
    }
};