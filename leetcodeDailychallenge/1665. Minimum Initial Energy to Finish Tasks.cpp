//problem link:  https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/?envType=daily-question&envId=2026-05-12
//timeComplexity: O(nlogn)+O(nlogs)
//spaceComplexity: O(nlogn)

class Solution {
bool isValid(long long x,vector<vector<int>>& tasks){
    for(int i=0;i<tasks.size();i++){
        int actual=tasks[i][0];
        int required=tasks[i][1];
        if(x>=required){
            x-=actual;
        }
        else if(x<required){
            return false;
        }
    }
    return true;
}
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        int n=tasks.size();
        int m=tasks[0].size();
        sort(tasks.begin(), tasks.end(), [](vector<int>& a, vector<int>& b){

    return (a[1] - a[0]) > (b[1] - b[0]);
});
        long long low=0;
        long long high=0;
        for(int i=0;i<tasks.size();i++){
            low+=tasks[i][0];
            high+=tasks[i][1];
        }
        //binary search algo
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(isValid(mid,tasks)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};