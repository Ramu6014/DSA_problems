//problem link: https://leetcode.com/problems/pascals-triangle-ii/
//timeComplexity: o(n*n)
//spaceComplexity: O(n*n)

class Solution {
    public List<Integer> getRow(int rowIndex) {
        int n=rowIndex;
        List<List<Integer>>ans=new ArrayList<>();
        for(int i=0;i<n+1;i++){
            List<Integer>temp=new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    temp.add(1);
                }
                else{
                    int val=ans.get(i-1).get(j-1)+ans.get(i-1).get(j);
                    temp.add(val);
                }
            }
            ans.add(temp);
        }
        return ans.get(n);
    }
}