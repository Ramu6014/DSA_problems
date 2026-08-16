//problem link: https://leetcode.com/problems/minimize-the-maximum-waiting-time-at-synchronized-traffic-lights/
//timeComplexity: o(nlogn)
//spaceComplexity: o(1)

class Solution {
private:
   int binarySearch(vector<int>&lights,int tar){
    int n=lights.size();
    int ans=-1;
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(lights[mid]>tar){
            ans=lights[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
   }
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxAssign=0;
        sort(lights.begin(),lights.end());
        for(int i=0;i<arrivalTime.size();i++){
            int r=arrivalTime[i]%period;
            int val=binarySearch(lights,r);
            if(r>val){
                maxAssign=max(maxAssign,period-r);
            }
        }
        return maxAssign;
    }
};