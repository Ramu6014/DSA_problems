//problem link: https://leetcode.com/problems/sort-an-array/
//timeComplexity: o(nlogn)
//spaceComplexity: o(n)

class Solution {
    public void merge(int low,int mid,int high,int nums[]){
        int i=low,j=mid+1;
        ArrayList<Integer>temp=new ArrayList<>();
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                temp.add(nums[i]);
                i++;
            }
            else{
                temp.add(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.add(nums[i]);
            i++;
        }
        while(j<=high){
            temp.add(nums[j]);
            j++;
        }
        for(i=0;i<temp.size();i++){
            nums[i+low]=temp.get(i);
        }
    }
    public void mergeSort(int low,int high,int []nums){
        if(low<high){
            int mid=low+(high-low)/2;
            mergeSort(low,mid,nums);
            mergeSort(mid+1,high,nums);
            merge(low,mid,high,nums);
        }
    }
    public int[] sortArray(int[] nums) {
        int n=nums.length;
        mergeSort(0,n-1,nums);
        return nums;
    }
}