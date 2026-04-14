//problem link: https://leetcode.com/problems/number-of-employees-who-met-the-target/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n)
//spaceComplexity: o(1)

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt=0;
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                cnt++;
            }
        }
        return cnt;
    }
};