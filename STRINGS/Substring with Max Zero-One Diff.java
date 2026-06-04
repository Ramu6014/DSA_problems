//problem link: https://www.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
  public:
    int maxSubstring(string &s) {
        // code here
        int n=s.size();
        int cnt0=0,cnt1=0;
        int maxDiff=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt0++;
            }
            if(s[i]=='1'){
                cnt1++;
            }
            int val=cnt0-cnt1;
            if(val<0){
                cnt1=0;
                cnt0=0;
            }
            else{
            maxDiff=max(maxDiff,val);
            }
        }
        return maxDiff==INT_MIN?-1:maxDiff;
    }
};