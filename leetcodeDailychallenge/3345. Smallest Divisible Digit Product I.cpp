//problem link: https://leetcode.com/problems/smallest-divisible-digit-product-i/?envType=daily-question&envId=2026-08-06
//timeComplexity: o(nlog(k))
//spaceComplexity: O(1)


class Solution {
    int findProduct(int x){
        int pr=1;
        while(x>0){
            int rem=x%10;
            pr*=rem;
            x/=10;
        }
        return pr;
    }
public:
    int smallestNumber(int n, int t) {
        int x=n;
        while(1){
            int product=findProduct(x);
            if(product%t == 0)return x;
            x++;
        }
        return -1;
    }
};