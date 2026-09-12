//problem link: https://www.geeksforgeeks.org/problems/quick-sort/1
//timeComplexity: O(nlog(n))
//spaceComplexity: O(1)

class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high)return;
        int pIndx=partition(arr,low,high);
        quickSort(arr,low,pIndx-1);
        quickSort(arr,pIndx+1,high);
    }

    int partition(vector<int>& arr, int low, int high) {
        // code here
        int left=low,right=high;
        int pivot=arr[low];
        while(left<=right){
            while(left<=right && arr[left]<=pivot)left++;
            while(left<=right && arr[right]>pivot)right--;
            if(left<=right){
                swap(arr[left],arr[right]);
            }
        }
        swap(arr[low],arr[right]);
        return right;
    }
};