//problem link: https://leetcode.com/problems/minimum-window-substring/
//timeComplexity: o(n)
//spaceComplexity: O(n)

class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int k=t.size();
        unordered_map<char,int>freq;
        for(int i=0;i<t.size();i++){
            freq[t[i]]++;
        }
        int l=0,r=0;
        int stIndx=-1;
        int minLen=INT_MAX;
        int cnt=0;
        while(r<n){
            if(freq[s[r]]>0){
                cnt++;
            }
            freq[s[r]]--;
            while(cnt==k){
                if((r-l+1)<minLen){
                    minLen=r-l+1;
                    stIndx=l;
                }
                freq[s[l]]++;
                if(freq[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return stIndx==-1?"":s.substr(stIndx,minLen);
    }
};