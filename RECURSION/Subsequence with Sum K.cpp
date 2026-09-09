//problem link: https://www.geeksforgeeks.org/problems/check-if-there-exists-a-subsequence-with-sum-k/1
//timeComplexity: O(2^n)
//spaceComplexity: O(n)

class Solution {
    bool func(int indx,vector<int>&arr,int sum,int k){
        if(sum>k)return false;
        if(indx>=arr.size()){
            if(sum==k)return true;
            else return false;
        }
        sum+=arr[indx];
        if(func(indx+1,arr,sum,k)==true){
            return true;
        }
        sum-=arr[indx];
        if(func(indx+1,arr,sum,k)==true){
            return true;
        }
        return false;
    }
  public:
    bool checkSubsequenceSum(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        return func(0,arr,0,k);
    }
};