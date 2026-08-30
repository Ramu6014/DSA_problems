//problem link: https://leetcode.com/problems/count-integers-appearing-in-a-single-block/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq,used;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]]++;
                cnt++;
            }
            else if(nums[i]!=nums[i-1] && used.find(nums[i])==used.end()){
                cnt--;
                used[nums[i]]++;
            }
        }
        return cnt;
    }
};