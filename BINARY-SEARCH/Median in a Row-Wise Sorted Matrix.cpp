//problem link: https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
//timeComplexity: O(log(n*m))*(nlog(m))
//spaceComplexity: O(1)

class Solution {
  private:
    int upperBound(vector<int>nums,int tar){
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=tar){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
  private:
    int blackBox(vector<vector<int>>&mat,int tar){
        int cnt=0;
        for(int i=0;i<mat.size();i++){
            cnt+=upperBound(mat[i],tar);
        }
        return cnt;
    }
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int required=(n*m)/2;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,mat[i][0]);
            maxi=max(maxi,mat[i][m-1]);
        }
        int low=mini,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            int smallEquals=blackBox(mat,mid);
            if(smallEquals<=required){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
