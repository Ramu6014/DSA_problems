//problem link: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
    int findSubstrings(string s,int k){
        int l=0,r=0;
        int n=s.size();
        unordered_map<char,int>freq;
        int cnt=0;
        while(r<n){
            freq[s[r]]++;
            while(freq.size()>k){
                freq[s[l]]--;
                if(freq[s[l]]==0){
                    freq.erase(s[l]);
                }
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
public:
    int numberOfSubstrings(string s) {
        return findSubstrings(s,3)-findSubstrings(s,2);
    }
};