//problem link: https://www.geeksforgeeks.org/problems/convert-sentence-to-camel-case/1
//timeComplexity: o(n)
//spaceComplexity: o(n)

// User function Template for Java

class Solution {
    // Function to convert the given string to Camel Case
    public String convertToCamelCase(String s) {
        // code here
        int n=s.length();
        char arr[]=s.toCharArray();
        boolean isCamel=false;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==' '){
                isCamel=true;
            }
            else if(isCamel){
                arr[i]=Character.toUpperCase(arr[i]);
                isCamel=false;
            }
        }
        StringBuilder res=new StringBuilder();
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=' '){
                res.append(arr[i]);
            }
        }
        return res.toString();
    }
}