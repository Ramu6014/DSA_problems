//problem link: https://leetcode.com/problems/defanging-an-ip-address/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
    public String defangIPaddr(String address) {
        int n=address.length();
        char arr[]=address.toCharArray();
        StringBuilder res=new StringBuilder();
        for(int i=0;i<arr.length;i++){
            if(arr[i]!='.'){
                res.append(arr[i]);
            }
            else{
                res.append("[.]");
            }
        }
        return res.toString();
    }
}