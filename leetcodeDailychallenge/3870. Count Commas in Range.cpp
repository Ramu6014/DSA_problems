//problem link: https://leetcode.com/problems/count-commas-in-range/
//timeComplexity: O(log(n))
//spaceComplexity: O(1)

class Solution {
    int findDigits(int x){
        int cnt=0;
        while(x!=0){
            x/=10;
            cnt++;
        }
        return cnt;
    }
public:
    int countCommas(int n) {
        if(n<1000)return 0;
        int commas=(findDigits(n)-1)/3;
        return (n-999)*commas;
    }
};