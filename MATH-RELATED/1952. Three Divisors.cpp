//problem link: https://leetcode.com/problems/three-divisors/
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
public:
    bool isThree(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cnt++;
            }
            if(cnt>3)return false;
        }
        return cnt==3;
    }
};