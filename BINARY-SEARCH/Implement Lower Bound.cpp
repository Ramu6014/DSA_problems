//problem link: https://www.geeksforgeeks.org/problems/implement-lower-bound/1
//timeComplexity: O(log(n))
//spaceComplexity: O(1)

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int ansIndx=n;
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=target){
                ansIndx=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ansIndx;
    }
};
