//problem link: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1
//timeComplexity: O(V+E)
//spaceComplexity: O(V+E)

// User function Template for Java
class Solution {
    public void topoSort(int node,int vis[],Stack<Integer>st,ArrayList<ArrayList<int[]>>adj){
        vis[node]=1;
        for(int[] it: adj.get(node)){
            int v=it[0];
            if(vis[v]==0){
                topoSort(v,vis,st,adj);
            }
        }
        st.push(node);
    }
    public int[] shortestPath(int V, int E, int[][] edges) {
        // Code here
        ArrayList<ArrayList<int []>>adj=new ArrayList<>();
        for(int i=0;i<V;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<edges.length;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj.get(u).add(new int[]{v,wt});
        }
        int vis[]=new int[V];
        Stack<Integer>st=new Stack<>();
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                topoSort(i,vis,st,adj);
            }
        }
        int dist[]=new int[V];
        for(int i=0;i<V;i++){
            dist[i]=Integer.MAX_VALUE;
        }
        dist[0]=0;
        while(!st.isEmpty()){
            int node=st.pop();
            for(int[] it: adj.get(node)){
                if(dist[node]!=Integer.MAX_VALUE && dist[node]+it[1]<dist[it[0]]){
                    dist[it[0]]=dist[node]+it[1];
                }
            }
        }
        for(int i=0;i<V;i++){
            if(dist[i]==Integer.MAX_VALUE){
                dist[i]=-1;
            }
        }
        return dist;
    }
}