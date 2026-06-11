//problem link: https://leetcode.com/problems/all-paths-from-source-to-target/
//timeComplexity: O(n*2^n)
//spaceComplexity: o(V)

class Solution {
    public void dfs(int node,int V,int vis[],List<Integer>temp,ArrayList<ArrayList<Integer>>adj,List<List<Integer>>ans){
        vis[node]=1;
        temp.add(node);
        if(node==V-1){
            ans.add(new ArrayList<>(temp));
        }
        for(Integer it: adj.get(node)){
            if(vis[it]==0){
                dfs(it,V,vis,temp,adj,ans);
            }
        }
        temp.remove(temp.size()-1);
        vis[node]=0;
    }
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        int V=graph.length;
        for(int i=0;i<V;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<graph.length;i++){
            for(int j=0;j<graph[i].length;j++){
                adj.get(i).add(graph[i][j]);
            }
        }
        int vis[]=new int[V];
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer>temp=new ArrayList<>();
        dfs(0,V,vis,temp,adj,ans);
        return ans;
    }
}