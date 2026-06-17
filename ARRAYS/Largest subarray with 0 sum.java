//problem link: https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
//timeComplexity: o(n)
//spaceComplexity: o(n)

import java.util.*;
class Solution {
    int maxLength(int arr[]) {
        // code here
        int n=arr.length;
        
        HashMap<Integer,Integer>mpp=new HashMap<>();
        mpp.put(0,-1);
        int sum=0;
        int maxLen=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int x=sum-0;
            if(mpp.containsKey(x)){
                maxLen=Math.max(maxLen,i-mpp.get(x));
            }
            if(!mpp.containsKey(sum)){
                mpp.put(sum,i);
            }
        }
        return maxLen;
    }
}