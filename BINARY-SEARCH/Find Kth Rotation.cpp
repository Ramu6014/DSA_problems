//problem link: https://www.geeksforgeeks.org/problems/rotation4723/1
//timeComplexity: O(log(n))
//spaceComplexity: O(1)

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        if(arr[0]<=arr[n-1]){
            return 0;
        }
        int low=0,high=n-1;
        int el=INT_MAX;
        int k=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[low]<=arr[mid]){
                if(arr[low]<=el){
                    el=arr[low];
                    k=low;
                }
                low=mid+1;
            }
            else{
                if(arr[mid]<=el){
                    el=arr[mid];
                    k=mid;
                }
                high=mid-1;
            }
        }
        return k;
    }
};
