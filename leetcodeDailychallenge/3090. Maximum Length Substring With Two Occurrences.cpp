//problem link: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
//timeComplexity: O(n)*O(26)
//spaceComplexity: o(n)

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>freq;
        int maxLen=0;
        int l=0,r=0;
        int maxFreq=0;
        while(r<n){
            freq[s[r]]++;
            maxFreq=max(maxFreq,freq[s[r]]);
            while(maxFreq>2){
                freq[s[l]]--;
                if(freq[s[l]]==0){
                    freq.erase(s[l]);
                }
                l++;
                maxFreq=0;
                for(auto it: freq){
                    maxFreq=max(maxFreq,it.second);
                }
            }
            maxLen=max(maxLen,r-l+1);
            r++;
        }
        return maxLen;
    }
};