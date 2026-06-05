//problem link: https://www.geeksforgeeks.org/problems/topological-sort/1
//timeComplexity: O(V+E)
//spaceComplexity: o(V)

class Solution {
    public ArrayList<Integer> topoSort(int V, int[][] edges) {
        // code here
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        for(int i=0;i<V;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<edges.length;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj.get(u).add(v);
        }
        int inorder[]=new int[V];
        for(int i=0;i<V;i++){
            for(Integer it: adj.get(i)){
                inorder[it]++;
            }
        }
        Queue<Integer>q=new LinkedList<>();
        for(int i=0;i<V;i++){
            if(inorder[i]==0){
                q.offer(i);
            }
        }
        ArrayList<Integer>ans=new ArrayList<>();
        while(!q.isEmpty()){
            int node=q.poll();
            ans.add(node);
            for(Integer it: adj.get(node)){
                inorder[it]--;
                if(inorder[it]==0){
                    q.offer(it);
                }
            }
        }
        return ans;
    }
}