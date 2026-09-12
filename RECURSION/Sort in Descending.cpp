//problem link: https://www.geeksforgeeks.org/problems/sort-in-descending--141631/1
//timeComplexity: o(nlog(n))
//spaceComplexity: O(1)

class Solution {
    int partition(int low,int high,vector<int>&arr){
        int left=low,right=high;
        int pivot=arr[low];
        while(left<=right){
            while(left<=right && arr[left]>=pivot)left++;
            while(left<=right && arr[right]<pivot)right--;
            if(left<=right){
                swap(arr[left],arr[right]);
            }
        }
        swap(arr[low],arr[right]);
        return right;
    }
    void quickSort(vector<int>&arr,int low,int high){
        if(low>=high)return;
        int pIndex=partition(low,high,arr);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
  public:
    void sortInDesc(vector<int>& arr) {
        // code here
        int n=arr.size();
        quickSort(arr,0,n-1);
    }
};