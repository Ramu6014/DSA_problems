//problem link: https://leetcode.com/problems/sum-multiples/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%3==0||i%5==0||i%7==0){
                sum+=i;
            }
        }
        return sum;
    }
};