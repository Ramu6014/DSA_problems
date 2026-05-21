//problem link: https://www.geeksforgeeks.org/problems/count-pairs-in-array-divisible-by-k/1
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    public int countKdivPairs(int[] arr, int k) {
        // code here
        int n=arr.length;
        int cnt=0;
        HashMap<Integer,Integer>freq=new HashMap<>();
        for(int i=0;i<n;i++){
            int rem=arr[i]%k;
            int needed=(k-rem)%k;
            if(freq.containsKey(needed)){
                cnt+=freq.get(needed);
            }
            freq.put(rem,freq.getOrDefault(rem,0)+1);
        }
        return cnt;
    }
}