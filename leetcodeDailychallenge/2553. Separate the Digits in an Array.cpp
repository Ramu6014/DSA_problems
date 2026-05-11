//problem link: https://leetcode.com/problems/separate-the-digits-in-an-array/?envType=daily-question&envId=2026-05-11
//timeComplexity: O(N∗log(max(Nums)))
//spaceComplexity: O(N∗log(max(Nums)))

class Solution {
public:
    void seperateDigits(int x,vector<int>&ans){
        vector<int>temp;
        while(x>0){
            int rem=x%10;
            temp.push_back(rem);
            x/=10;
        }
        for(int i=temp.size()-1;i>=0;i--){
            ans.push_back(temp[i]);
        }
        return;
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]>9){
            seperateDigits(nums[i],ans);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};