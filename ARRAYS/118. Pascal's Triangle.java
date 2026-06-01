//problem link: https://leetcode.com/problems/pascals-triangle/
//timeComplexity: O(n*n)
//spaceComplexity: O(n*n)

class Solution {
    public List<List<Integer>> generate(int numRows) {
        int n=numRows;
        List<List<Integer>>ans=new ArrayList<>();
        for(int i=0;i<n;i++){
            List<Integer>temp=new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(j==0||i==j){
                    temp.add(1);
                }
                else{
                    int sum=ans.get(i-1).get(j-1)+ans.get(i-1).get(j);
                    temp.add(sum);
                }
            }
            ans.add(temp);
        }
        return ans;
    }
}