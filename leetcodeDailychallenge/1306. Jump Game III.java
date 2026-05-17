//problem link: https://leetcode.com/problems/jump-game-iii/?envType=daily-question&envId=2026-05-17
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
    public static void dfs(int node,int vis[],ArrayList<ArrayList<Integer>>adj){
        vis[node]=1;
        for(Integer it: adj.get(node)){
            if(vis[it]==0){
                dfs(it,vis,adj);
            }
        }
    }
    public boolean canReach(int[] arr, int start) {
        int n=arr.length;
        int vis[]=new int[n];
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<n;i++){
            int u=i+arr[i];
            int v=i-arr[i];
            if(u<n && u!=i){
                adj.get(i).add(u);
            }
            if(v>=0 && v<n && v!=i){
                adj.get(i).add(v);
            }
        }
        dfs(start,vis,adj);
        for(int i=0;i<n;i++){
            if(arr[i]==0 && vis[i]==1){
                return true;
            }
        }
        return false;
    }
}