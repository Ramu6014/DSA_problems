//problem link: https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1
//timeComplexity: O(log(n))
//spaceComplexity: O(1)

class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int indx=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=x){
                indx=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return indx;
    }
};