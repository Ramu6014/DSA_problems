//problem link: https://leetcode.com/problems/count-indices-with-opposite-parity/
//timeComplexity: O(n^2)
//spaceComplexity: O(n)

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt=0;
            for(int j=i+1;j<n;j++){
                if(nums[i]%2==0 && nums[j]%2!=0){
                    cnt++;
                }
                else if(nums[i]%2!=0 && nums[j]%2==0){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};