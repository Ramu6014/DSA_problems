//problem link: https://www.geeksforgeeks.org/problems/alien-dictionary/1
//timeComplexity: O(V+E)
//spaceComplexity: O(V+E)


class Solution {
    public ArrayList<Integer> topoSort(ArrayList<ArrayList<Integer>>adj){
        int indegree[]=new int[26];
        for(int i=0;i<26;i++){
            for(Integer it: adj.get(i)){
                indegree[it]++;
            }
        }
        Queue<Integer>q=new LinkedList<>();
        for(int i=0;i<26;i++){
            if(indegree[i]==0){
                q.offer(i);
            }
        }
        ArrayList<Integer>ans=new ArrayList<>();
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
        return ans;
    }
    public String findOrder(String[] words){
        // code here
        int present[]=new int[26];
        int cnt=0;
        for(int i=0;i<words.length;i++){
            String s=words[i];
            for(int j=0;j<s.length();j++){
                char ch=s.charAt(j);
                if(present[ch-'a']==0){
                    present[ch-'a']=1;
                    cnt++;
            }
        }
        }
        ArrayList<ArrayList<Integer>>adj=new ArrayList<>();
        for(int i=0;i<26;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<words.length-1;i++){
            String s1=words[i];
            String s2=words[i+1];
            if(s1.length()>s2.length() && s1.substring(0,s2.length()).equals(s2)){
                return "";
            }
            int len=Math.min(s1.length(),s2.length());
            for(int j=0;j<len;j++){
                char c1=s1.charAt(j);
                char c2=s2.charAt(j);
                if(c1!=c2){
                    adj.get(c1-'a').add(c2-'a');
                    break;
                }
            }
        }
            ArrayList<Integer>ans=topoSort(adj);
            StringBuilder sb=new StringBuilder();
            for(int i=0;i<ans.size();i++){
                int node=ans.get(i);
                if(present[node]==1){
                    char ch=(char)(node+'a');
                    sb.append(ch);
                }
            }
            return sb.length()==cnt?sb.toString():"";
        
    }
}