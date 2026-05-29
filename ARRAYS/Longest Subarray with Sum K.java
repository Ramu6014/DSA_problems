//problem link: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        unordered_map<int,int>freq;
        int sum=0;
        int maxLen=0;
        freq[0]=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int val=sum-k;
            if(freq.find(val)!=freq.end()){
                maxLen=max(maxLen,i-freq[val]);
            }
            if(freq.find(sum)==freq.end()){
             freq[sum]=i;   
            }
        }
        return maxLen;
    }
};