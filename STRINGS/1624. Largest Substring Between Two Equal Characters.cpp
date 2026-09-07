//problem link: https://leetcode.com/problems/largest-substring-between-two-equal-characters/
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n=s.size();
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]=i;
        }
        int maxLen=-1;
        for(int i=0;i<n;i++){
            maxLen=max(maxLen,freq[s[i]]-i-1);
        }
        return maxLen;
    }
};