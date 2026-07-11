//problem link: https://www.geeksforgeeks.org/problems/aggressive-cows/1
//timeComplexity: o(n*log(MAXI))
//spaceComplexity: O(1)

class Solution {
  private:
    bool isPossible(vector<int>&arr,int k,int dist){
        int cntCows=1;
        int lastIndx=0;
        for(int i=1;i<arr.size();i++){
            int val=abs(arr[i]-arr[lastIndx]);
            if(val>=dist){
                cntCows++;
                lastIndx=i;
            }
        }
        return cntCows>=k;
    }
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int low=1;
        int high=arr[n-1]-arr[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(arr,k,mid)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};