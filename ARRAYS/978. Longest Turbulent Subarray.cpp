//problem link: https://leetcode.com/problems/longest-turbulent-subarray/description/
//timeComplexity: O(n^2)
//spaceComplexity: O(1)

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size();
        bool  less,great;
        int maxLen=INT_MIN;
        for(int i=0;i<n-1;i++){
            int j=i+1;
            int cnt=2;
            if(arr[i]>arr[j]){
                less=true,great=false;
            }
            else if(arr[i]<arr[j]){
                great=true,less=false;
            }
            else if(arr[i]==arr[j]){
                continue;
            }
            for(int k=j+1;k<n;k++){
                if(arr[k]==arr[k-1]){
                    break;
                }
                else if(arr[k-1]<arr[k] && less==true){
                    great=true,less=false;
                    cnt++;
                }
                else if(arr[k-1]>arr[k] && great==true){
                    great=false,less=true;
                    cnt++;
                }
                else{
                    break;
                }
            }
            maxLen=max(maxLen,cnt);
        }

        return maxLen==INT_MIN?1:maxLen;
    }
};