//problem link: https://leetcode.com/problems/reverse-pairs/
//timeComplexity: O((2n)log(n))
//spaceComplexity: O(n)

class Solution {
    int cnt=0;
private:
    void merge(int low,int mid,int high,vector<int>&nums){
        int left=low;
        int right=mid+1;
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
        for(int i=0;i<temp.size();i++){
            nums[i+low]=temp[i];
        }
    }
private:
    void countPairs(int low,int mid,int high,vector<int>&nums){
        int right=mid+1;
        for(int left=low;left<=mid;left++){
            while(right<=high && nums[left]>2*1LL*nums[right]){
                right++;
            }
            cnt+=right-(mid+1);
        }
    }
private:
    void mergeSort(int low,int high,vector<int>&nums){
        if(low>=high){
            return;
        }
        int mid=low+(high-low)/2;
        mergeSort(low,mid,nums);
        mergeSort(mid+1,high,nums);
        countPairs(low,mid,high,nums);
        merge(low,mid,high,nums);
    }
public:
    int reversePairs(vector<int>& nums){
        int n=nums.size();
        mergeSort(0,n-1,nums);
        return cnt;
    }
};