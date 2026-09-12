//problem link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
//timeComplexity: o(nlog(n))
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
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int val=findDigits(nums[i]);
            if(val%2==0){
                cnt+=1;
            }
        }
        return cnt;
    }
};