//problem link: https://leetcode.com/problems/sort-array-by-increasing-frequency/
//timeComplexity: O(nlogn)
//spaceComplexity: O(n)

class Solution {
    public int[] frequencySort(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>freq=new HashMap<>();
        for(int i=0;i<n;i++){
            freq.put(nums[i],freq.getOrDefault(nums[i],0)+1);
        }
        Integer[] arr=new Integer[n];
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }
        Arrays.sort(arr,(a,b)->{
            if(freq.get(a).equals(freq.get(b))){
                return b-a;
            }
            return freq.get(a)-freq.get(b);
        });
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
        return nums;
    }
}