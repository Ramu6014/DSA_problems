//problem link: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
//timeComplexity: o(n+m)
//spaceComplexity: o(n)

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int,int>freq;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                cnt++;
                freq[cnt]=i;
            }
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(freq.find(queries[i])!=freq.end()){
                ans.push_back(freq[queries[i]]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};