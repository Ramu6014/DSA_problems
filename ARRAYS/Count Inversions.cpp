//problem link: https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
//timeComplexity: O(nlogn)
//spaceComplexity: O(n)

class Solution {
  private:
    void merge(int low,int mid,int high,vector<int>&arr,int &cnt){
        int left=low;
        int right=mid+1;
        vector<int>temp;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                cnt+=(mid-left+1);
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=0;i<temp.size();i++){
            arr[i+low]=temp[i];
        }
    }
  private:
    void mergeSort(int low,int high,vector<int>&arr,int &cnt){
        if(low>=high)return;
        int mid=low+(high-low)/2;
        mergeSort(low,mid,arr,cnt);
        mergeSort(mid+1,high,arr,cnt);
        merge(low,mid,high,arr,cnt);
    }
  public:
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int cnt=0;
        mergeSort(0,n-1,arr,cnt);
        return cnt;
    }
};