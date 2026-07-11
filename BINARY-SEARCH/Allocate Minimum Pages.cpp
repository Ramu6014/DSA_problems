//problem link: https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
//timeComplexity: O(n*log(n))
//spaceComplexity: o(1)

class Solution {
  private:
    vector<long long> findLowHigh(vector<int>&arr){
        int maxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
            sum+=arr[i];
        }
        return {maxi,sum};
    }
    private:
        int isPossible(vector<int>&arr,long long barrier){
            int studs=1;
            int sum=0;
            for(int i=0;i<arr.size();i++){
                if(sum+arr[i]<=barrier){
                    sum+=arr[i];
                }
                else{
                   studs++;
                    sum=arr[i];
                }
            }
            return studs;
        }
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(k>n){
            return -1;
        }
        vector<long long>range=findLowHigh(arr);
        long long low=range[0];
        long long high=range[1];
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(isPossible(arr,mid)>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};