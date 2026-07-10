//problem link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
//timeComplexity: o(n*log(SUM))
//spaceComplexity: o(1)

class Solution {
private:
    vector<int> findLowHigh(vector<int>&weights){
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            maxi=max(maxi,weights[i]);
            sum+=weights[i];
        }
        return {maxi,sum};
    }
private:
    bool isPossible(vector<int>&weights,int days,int capacity){
        int reqDays=0;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=capacity){
                sum+=weights[i];
            }
            else{
                reqDays+=ceil((double)sum/capacity);
                sum=weights[i];
            }
        }
        reqDays+=ceil((double)sum/capacity);
        return reqDays<=days;
    }
public:                                         
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        vector<int>range=findLowHigh(weights);
        int low=range[0];
        int high=range[1];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(weights,days,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};