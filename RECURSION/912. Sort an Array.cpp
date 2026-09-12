//problem link: https://leetcode.com/problems/sort-an-array/?envType=problem-list-v2&envId=merge-sort
//timeComplexity: O(nlog(n))
//spaceComplexity: O(n)

class Solution {
    void merge(int low,int mid,int high,vector<int>&nums){
        int left=low,right=mid+1;
        vector<int>temp;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
        return;
    }
    void mergeSort(int low,int high,vector<int>&nums){
        if(low>=high)return;
        int mid=low+(high-low)/2;
        mergeSort(low,mid,nums);
        mergeSort(mid+1,high,nums);
        merge(low,mid,high,nums);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergeSort(0,n-1,nums);
        return nums;
    }
};