//problem link: https://www.geeksforgeeks.org/problems/elements-in-the-range2834/1
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    public boolean checkElements(int start, int end, int[] arr) {
        // code here
        int n=arr.length;
        HashMap<Integer,Integer>freq=new HashMap<>();
        for(int i=0;i<n;i++){
            freq.put(arr[i],freq.getOrDefault(arr[i],0)+1);
        }
        for(int i=start;i<=end;i++){
            if(!freq.containsKey(i)){
                return false;
            }
        }
        return true;
    }
}