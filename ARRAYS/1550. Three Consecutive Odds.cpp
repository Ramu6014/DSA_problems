//problem link: https://leetcode.com/problems/three-consecutive-odds/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                odd++;
            }
            else{
                odd=0;
            }
            if(odd==3){
                return true;
            }
        }
        return false;
    }
};