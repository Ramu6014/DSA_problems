//problem link: https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
    public static void reverse(int arr[],int st,int end){
        while(st<end){
            int temp=arr[st];
            arr[st]=arr[end];
            arr[end]=temp;
            st++;
            end--;
        }
    }
    static void rotateArr(int arr[], int d) {
        // code here
        
        int n=arr.length;
        d=d%n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        return;
    }
}