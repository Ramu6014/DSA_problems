//problem link: https://leetcode.com/problems/longest-cycle-in-a-graph/
//timeComplexity: o(V+2E)
//spaceComplexity: o(V+2E)

class Solution {
    int ans=-1;
    public void dfs(int node,int level,int vis[],int pathVis[],int depth[],ArrayList<ArrayList<Integer>>adj){
        vis[node]=1;
        pathVis[node]=1;
        depth[node]=level;
        for(int it: adj.get(node)){
            if(vis[it]==0){
                dfs(it,level+1,vis,pathVis,depth,adj);
            }
            else if(pathVis[it]==1){
                ans=Math.max(ans,level-depth[it]+1);
            }
        }
        pathVis[node]=0;
    }
    public int longestCycle(int[] edges) {
        int V=edges.length;
        int vis[]=new int[V];
        int pathVis[]=new int[V];
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        for(int i=0;i<V;i++){
            adj.add(new ArrayList<>());
        }
        int depth[]=new int[V];
        for(int i=0;i<V;i++){
            if(edges[i]!=-1){
                adj.get(i).add(edges[i]);
            }
        }
        //loop for every node
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs(i,0,vis,pathVis,depth,adj);
            }
        }
        return ans;
    }
}