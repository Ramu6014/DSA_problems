//problem link: https://leetcode.com/problems/count-commas-in-range-ii/?envType=daily-question&envId=2026-09-09
//timeComplexity: o(logn)
//spaceComplexity: o(1)

class Solution {
public:
    long long countCommas(long long n) {
        long long commas=1;
        long long res=0;
        for(long long st=1000;st<=n;st*=1000){
            long long end=st*1000-1;
            long long mini=min(end,n);
            long long val=(mini-st+1)*commas;
            res+=val;
            commas++;
        }
        return res;
    }
};