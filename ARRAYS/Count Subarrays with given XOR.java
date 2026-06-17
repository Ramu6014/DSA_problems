//problem link: https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
    public long subarrayXor(int arr[], int k) {
        // code here
        int n=arr.length;
        HashMap<Integer,Integer>mpp=new HashMap<>();
        mpp.put(0,1);
        int xor0=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            xor0^=arr[i];
            int x=xor0^k;
            if(mpp.containsKey(x)){
                cnt+=mpp.get(x);
            }
            mpp.put(xor0,mpp.getOrDefault(xor0,0)+1);
        }
        return cnt;
    }
}