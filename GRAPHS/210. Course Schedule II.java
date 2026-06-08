//problem link: https://leetcode.com/problems/course-schedule-ii/
//timeComplexity: O(V+E)
//spaceComplexity: O(V+E)

class Solution {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        for(int i=0;i<numCourses;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<prerequisites.length;i++){
            int u=prerequisites[i][1];
            int v=prerequisites[i][0];
            adj.get(u).add(v);
        }
        int indegree[]=new int[numCourses];
        for(int i=0;i<numCourses;i++){
            for(Integer it: adj.get(i)){
                indegree[it]++;
            }
        }
        Queue<Integer>q=new LinkedList<>();
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.offer(i);
            }
        }
        List<Integer>ans=new ArrayList<>();
        while(!q.isEmpty()){
            int node=q.poll();
            ans.add(node);
            for(Integer it: adj.get(node)){
                indegree[it]--;
                if(indegree[it]==0){
                    q.offer(it);
                }
            }
        }
        if(ans.size()==numCourses){
            int temp[]=new int[numCourses];
            for(int i=0;i<ans.size();i++){
                temp[i]=ans.get(i);
            }
            return temp;
        }
        return new int[]{};
    }
}