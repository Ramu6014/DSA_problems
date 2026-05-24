//problem link: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
//timeComplexity: O(V+2E)
//spaceComplexity: O(V)+O(V+2E)

class Solution {
    public boolean dfs(int node,int vis[],int pathVis[],ArrayList<ArrayList<Integer>>adj){
        vis[node]=1;
        pathVis[node]=1;
        for(int it: adj.get(node)){
            if(vis[it]==0){
                if(dfs(it,vis,pathVis,adj)){
                    return true;
                }
            }
            else if(vis[it]==1 && pathVis[it]==1){
                return true;
            }
        }
        pathVis[node]=0;
        return false;
    }
    public boolean isCyclic(int V, int[][] edges) {
        // code here
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        for(int i=0;i<V;i++){
            adj.add(new ArrayList<>());
        }
        int vis[]=new int[V];
        int pathVis[]=new int[V];
        for(int i=0;i<edges.length;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj.get(u).add(v);
        }
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(dfs(i,vis,pathVis,adj)){
                    return true;
                }
            }
        }
        return false;
    }
}