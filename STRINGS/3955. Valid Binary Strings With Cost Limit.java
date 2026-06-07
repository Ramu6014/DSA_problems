//problem link: https://leetcode.com/problems/valid-binary-strings-with-cost-limit/
//timeComplexity: O(n*2^n)
//spaceComplexity: O(n)

class Solution {
    public void toggleFun(StringBuilder sb,int indx){
        if(sb.charAt(indx)=='0'){
            sb.setCharAt(indx,'1');
        }
        else{
             sb.setCharAt(indx,'0');
        }
        return;
    }
    public void func(int indx,int n,StringBuilder sb,List<String>temp){
        if(indx==n){
            temp.add(sb.toString());
            return;
        }
        func(indx+1,n,sb,temp);
        toggleFun(sb,indx);
        func(indx+1,n,sb,temp);
        toggleFun(sb,indx);
    }
    public List<String> generateValidStrings(int n, int k) {
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<n;i++){
            sb.append('0');
        }
        List<String>temp=new ArrayList<>();
        func(0,n,sb,temp);
        List<String>ans=new ArrayList<>();
        for(int i=0;i<temp.size();i++){
            int cost=0;
            boolean flag=true;
            for(int j=0;j<temp.get(i).length()-1;j++){
                if(temp.get(i).charAt(j)=='1'){
                    cost+=j;
                }
                if(temp.get(i).charAt(j)=='1' && temp.get(i).charAt(j+1)=='1'){
                    flag=false;
                    break;
                }
            }
            if(temp.get(i).charAt(n-1)=='1'){
                cost+=n-1;
            }
            if(flag && cost<=k){
                ans.add(temp.get(i));
            }
        }
        return ans;
    }
}