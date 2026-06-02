//problem link: https://www.geeksforgeeks.org/problems/bubble-sort/1
//timeComplexity: O(n^2)
//spaceComplexity: o(1)

class Solution {
    public void bubbleSort(int[] arr) {
        // code here
        int n=arr.length;
        for(int i=0;i<n;i++){
            boolean flag=true;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=false;
                }
            }
            if(flag){
                break;
            }
        }
        return;
    }
}