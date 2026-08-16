//problem link: https://leetcode.com/problems/longest-repeating-character-replacement/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    int characterReplacement(string s, int k){
       int n=s.size();
       unordered_map<char,int>freq;
       int l=0,r=0;
       int maxLen=0;
       int maxFreq=0;
       while(r<n){
        freq[s[r]]++;
        maxFreq=max(maxFreq,freq[s[r]]);
        if((r-l+1)-maxFreq>k){
            freq[s[l]]--;
            if(freq[s[l]]==0){
                freq.erase(s[l]);
            }
            l++;
            maxFreq=0;
            // for(auto it: freq){
            //     maxFreq=max(maxFreq,it.second);
            // }
        }
        maxLen=max(maxLen,r-l+1);
        r++;
       }
       return maxLen;
    }
};