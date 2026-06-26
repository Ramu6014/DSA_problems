//problem link: https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
//timeComplexity: O(log(n))
//spaceComplexity: O(1)

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int indx=-1;
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<=x){
                indx=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return indx;
    }
};
