//problem link: https://leetcode.com/problems/sum-of-primes-between-number-and-its-reverse/
//timeComplexity: O(k × √n)
//spaceComplexity: o(1)

class Solution {
public:
    int revNum(int x){
        int sum=0;
        while(x>0){
            int rem=x%10;
            sum=sum*10+rem;
            x/=10;
        }
        return sum;
    }
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int rev=revNum(n);
        int st=min(n,rev);
        int end=max(n,rev);
        int sum=0;
        for(int i=st;i<=end;i++){
            if(isPrime(i)){
                sum+=i;
            }
        }
        return sum;
    }
};