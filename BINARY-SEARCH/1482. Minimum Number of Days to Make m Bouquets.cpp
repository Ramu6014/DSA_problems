//problem link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
//timeComplexity: O(n*log(n))
//spaceComplexity: O(1)

class Solution {
private:
    bool isPossible(vector<int>&bloomDay,int m,int k,int day){
        int cnt=0;
        int numBoq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                numBoq+=(cnt/k);
                cnt=0;
            }
        }
        numBoq+=(cnt/k);
        return numBoq>=m;
    }
private:
    vector<int> findLowHigh(vector<int>&bloomDay){
        int n=bloomDay.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }
        return {mini,maxi};
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(1LL*m*k>n){
            return -1;
        }
        vector<int>range=findLowHigh(bloomDay);
        int low=range[0];
        int high=range[1];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(bloomDay,m,k,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};