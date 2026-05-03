//problem link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
//timeComplexity: O(n^2)
//spaceComplexity: O(1)

class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>freq;
            for(int j=i;j<n;j++){
                freq[s[j]]++;
                 int maxi=0,mini=n;
                for(auto it: freq){
                    if(it.second>maxi){
                        maxi=it.second;
                    }
                    if(it.second<mini){
                        mini=it.second;
                    }
                }
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};