//problem link: https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1
//timeComplexity: o(n*log(m))
//spaceComplexity: o(1)

class Solution {
  private:
    int findOnes(vector<int>nums){
        int n=nums.size();
        int ones=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==1){
                ones=max(ones,n-mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ones;
    }
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size();
        int maxOnes=-1;
        int row=-1;
        for(int i=0;i<n;i++){
            int ones=findOnes(arr[i]);
            if(ones>maxOnes){
                maxOnes=ones;
                row=i;
            }
        }
        return row;
    }
};