//problem link: https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
//timeComplexity: O(n*log(sum-maxi))
//spaceComplexity: o(1)

class Solution {
  private:
    int isValid(vector<int>&arr,int k,int maxAllowed){
        int sum=0;
        int reqPainters=1;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=maxAllowed){
                sum+=arr[i];
            }
            else{
                reqPainters++;
                sum=arr[i];
            }
        }
        return reqPainters;
    }
  private:
    vector<int> findLowHigh(vector<int>&arr){
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        return {maxi,sum};
    }
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        vector<int>range=findLowHigh(arr);
        int low=range[0],high=range[1];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isValid(arr,k,mid)>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
