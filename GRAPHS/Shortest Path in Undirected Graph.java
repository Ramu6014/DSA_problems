//problem link: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
//timeComplexity: O(V+2E)
//spaceComplexity: O(V+2E)

class Pair{
    int node;
    int distance;
    Pair(int node,int distance){
        this.node=node;
        this.distance=distance;
    }
}
class Solution {
    public void bfs(int src,int dist[],ArrayList<ArrayList<Integer>>adj){
        Queue<Pair>q=new LinkedList<>();
        q.offer(new Pair(src,0));
        dist[src]=0;
        while(!q.isEmpty()){
            Pair curr=q.poll();
            for(Integer it: adj.get(curr.node)){
                if(curr.distance+1<dist[it]){
                    dist[it]=curr.distance+1;
                    q.offer(new Pair(it,curr.distance+1));
                }
            }
        }
    }
    public int[] shortestPath(int V, int[][] edges, int src) {
        // code here
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        for(int i=0;i<V;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<edges.length;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj.get(u).add(v);
            adj.get(v).add(u);
        }
        int dist[]=new int[V];
        for(int i=0;i<V;i++){
            dist[i]=Integer.MAX_VALUE;
        }
        bfs(src,dist,adj);
        for(int i=0;i<V;i++){
            if(dist[i]==Integer.MAX_VALUE){
                dist[i]=-1;
            }
        }
        return dist;
    }
}
