//problem link: https://leetcode.com/problems/minimum-operations-to-transform-array-into-alternating-prime/
//timeComplexity: O(n*sqrt(k))
//spaceComplexity: O(1)

class Solution {
public:
    bool isPrime(int n){
        if(n==1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                while(!isPrime(nums[i])){
                    cnt++;
                    nums[i]+=1;
                }
            }
            else{
                while(isPrime(nums[i])){
                    cnt++;
                    nums[i]+=1;
                }
            }
        }
        return cnt;
    }
};