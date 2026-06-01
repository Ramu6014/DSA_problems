//problem link: https://leetcode.com/problems/find-eventual-safe-states/
//timeComplexity: O(V+E)
//spaceComplexity: O(3V)+O(V+E)

class Solution {
    public boolean dfs(int node,int vis[],int pathVis[],int check[],ArrayList<ArrayList<Integer>>adj){
        vis[node]=1;
        pathVis[node]=1;
        for(Integer it: adj.get(node)){
            if(vis[it]==0){
                if(dfs(it,vis,pathVis,check,adj)==true){
                    return true;
                }
            }
            else if(pathVis[it]==1){
                return true;
            }
        }
        pathVis[node]=0;
        check[node]=1;
        return false;
    }
    public List<Integer> eventualSafeNodes(int[][] graph) {
        int n=graph.length;
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<graph.length;i++){
            for(int j=0;j<graph[i].length;j++){
                adj.get(i).add(graph[i][j]);
            }
        }
        int vis[]=new int[n];
        int pathVis[]=new int[n];
        int check[]=new int[n];
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i,vis,pathVis,check,adj);
            }
        }
        List<Integer>ans=new ArrayList<>();
        for(int i=0;i<n;i++){
            if(check[i]==1){
                ans.add(i);
            }
        }
        return ans;
    }
}