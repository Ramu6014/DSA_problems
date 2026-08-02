//problem link: https://leetcode.com/problems/maximize-pair-strength-using-gcd/
//timeComplexity: o(n^2*log(k))
//spaceComplexity: O(1)

class Solution {
    int gcd(int n1,int n2){
        if(n1==0){
            return n2;
        }
        return gcd(n2%n1,n1);
    }
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long ans=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long gcdVal=gcd(nums[i],nums[j]);
                long long pr=1LL*nums[i]*nums[j]/pow(gcdVal,2);
                if(pr>ans){
                    ans=pr;
                }
            }
        }
        return ans;
    }
};