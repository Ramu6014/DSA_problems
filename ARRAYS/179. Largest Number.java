//problem link: https://leetcode.com/problems/largest-number/
//timeComplexity: o(nlog(n))
//spaceComplexity: O(n)

class Solution {
    public String largestNumber(int[] nums) {
        int n=nums.length;
        Integer []arr=new Integer[n];
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }
        Arrays.sort(arr,(a,b)->{
            String s1=String.valueOf(a)+String.valueOf(b);
            String s2=String.valueOf(b)+String.valueOf(b);
            return s2.compareTo(s1);
        });
        String res="";
        for(int i=0;i<n;i++){
            res=res+String.valueOf(arr[i]);
        }
        if(res.charAt(0)=='0'){
            return "0";
        }
        return res;
    }
}