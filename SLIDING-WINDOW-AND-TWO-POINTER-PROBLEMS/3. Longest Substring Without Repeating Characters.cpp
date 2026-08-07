//problem link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
//timeComplexity: o(n)
//spaceComplexity: O(1)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxLen=0;
        int l=0,r=0;
        unordered_map<char,int>freq;
        while(r<n){
            freq[s[r]]++;
            while(freq[s[r]]>1){
                freq[s[l]]--;
                if(freq[s[l]]==0){
                    freq.erase(s[l]);
                }
                l++;
            }
            maxLen=max(maxLen,(r-l+1));
            r++;
        }
        return maxLen;
    }
};