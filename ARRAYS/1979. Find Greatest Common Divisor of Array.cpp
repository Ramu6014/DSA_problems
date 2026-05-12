//problem link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
//timeComplexity: O(n)+O(log(min(maxi,mini)))
//spaceComplexity: O(1)

class Solution {
private:
    int gcd(int n1,int n2){
        if(n2==0){
            return n1;
        }
        return gcd(n2,n1%n2);
    }
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        }
        return gcd(maxi,mini);
    }
};