//problem link: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
//timeComplexity: O(nlog(n))
//spaceComplexity: O(1)

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        if(arr[0]!=1){
            arr[0]=1;
        }
        int maxEl=1;
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])>1){
                arr[i]=arr[i-1]+1;
            }
            maxEl=max(maxEl,arr[i]);
        }
        return maxEl;
    }
};