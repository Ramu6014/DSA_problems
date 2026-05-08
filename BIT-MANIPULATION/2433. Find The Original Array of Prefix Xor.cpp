//problem link: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        if(n==1){
            return {pref[0]};
        }
        vector<int>ans(n);
        for(int i=n-1;i>0;i--){
            ans[i]=pref[i]^pref[i-1];
        }
        ans[0]=pref[0];
        return ans;
    }
};