//problem link: https://leetcode.com/problems/merge-intervals/
//timeComplexity: O(nlogn)
//spaceComplexity: O(n)

class Solution {
    public int[][] merge(int[][] intervals) {
        int n=intervals.length;
        Arrays.sort(intervals,(a,b)->{
            return a[0]-b[0];
        });
        List<int[]>temp=new ArrayList<>();
        int st=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<intervals.length;i++){
            if(intervals[i][0]<=end){
                end=Math.max(intervals[i][1],end);
            }
            else{
                temp.add(new int[] {st,end});
                st=intervals[i][0];
                end=intervals[i][1];
            }
        }
        temp.add(new int[]{st,end});
        int ans[][]=new int[temp.size()][2];
        for(int i=0;i<temp.size();i++){
            ans[i]=temp.get(i);
        }
        return ans;
    }
}