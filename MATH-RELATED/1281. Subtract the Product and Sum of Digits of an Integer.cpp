//problem link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(k)
//spaceComplexity: O(1)

class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sum=0;
        long long product=1;
        int x=n;
        while(x>0){
            int rem=x%10;
            sum+=rem;
            product*=rem;
            x/=10;
        }
        return product-sum;
    }
};