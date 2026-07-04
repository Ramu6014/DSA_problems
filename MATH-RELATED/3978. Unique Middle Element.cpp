//problem link: https://leetcode.com/problems/unique-middle-element/
//timeComplexity: O(n)
//spaceComplexity:  O(n)

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int indx=n/2;
        return freq[nums[indx]]==1;
    }
};