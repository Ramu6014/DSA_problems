//problem link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int div=0,notDiv=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                div+=i;
            }
            else{
                notDiv+=i;
            }
        }
        return (notDiv-div);
    }
};