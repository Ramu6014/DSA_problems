//problem link: https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int leftSum=0;
        for(int i=0;i<n;i++){
            if(leftSum==sum-leftSum-arr[i]){
                return i;
            }
            leftSum+=arr[i];
        }
        return -1;
    }
};