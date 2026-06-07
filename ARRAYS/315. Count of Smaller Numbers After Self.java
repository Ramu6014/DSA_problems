//problem link: https://leetcode.com/problems/count-of-smaller-numbers-after-self/
//timeComplexity: o(nlogn)
//spaceComplexity: O(n)

class Solution {
    public void merge(int low,int mid,int high,ArrayList<int[]>arr,List<Integer>ans){
        int i=low,j=mid+1;
        ArrayList<int[]>temp=new ArrayList<>();
        while(i<=mid && j<=high){
            if(arr.get(i)[0]<=arr.get(j)[0]){
                int indx=arr.get(i)[1];
                int val=j-(mid+1);
                ans.set(indx,ans.get(indx)+val);
                temp.add(arr.get(i));
                i++;
            }
            else{
                temp.add(arr.get(j));
                j++;
            }
        }
        while(i<=mid){
            int indx=arr.get(i)[1];
                int val=j-(mid+1);
                ans.set(indx,ans.get(indx)+val);
                temp.add(arr.get(i));
                i++;
        }
        while(j<=high){
            temp.add(arr.get(j));
            j++;
        }
        for(int k=0;k<temp.size();k++){
            arr.set(k+low,temp.get(k));
        }
    }
    public void mergeSort(int low,int high,ArrayList<int[]>arr,List<Integer>ans){
        if(low>=high)return;
        int mid=low+(high-low)/2;
        mergeSort(low,mid,arr,ans);
        mergeSort(mid+1,high,arr,ans);
        merge(low,mid,high,arr,ans);
    }
    public List<Integer> countSmaller(int[] nums) {
        int n=nums.length;
        ArrayList<int []>arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(new int[]{nums[i],i});
        }
        List<Integer>ans=new ArrayList<>();
        for(int i=0;i<n;i++){
            ans.add(0);
        }
        mergeSort(0,n-1,arr,ans);
        return ans;
    }
}