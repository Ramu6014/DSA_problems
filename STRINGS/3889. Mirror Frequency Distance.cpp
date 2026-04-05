//problem link: https://leetcode.com/problems/mirror-frequency-distance/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    int mirrorFrequency(string s) {
        int n=s.size();
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        char ch,m;
       int cnt=0;
        unordered_set<char>vis;
        for(auto it: freq){
            ch=it.first;
            if(vis.find(ch)!=vis.end()){
                continue;
            }
            if(isalpha(ch)){
                m='z'-(ch-'a');
            }
            else{
                m='9'-(ch-'0');
            }
            int freq_m=(freq.find(m)!=freq.end())?freq[m]:0;
            cnt=cnt+abs(freq[ch]-freq_m);
            
            vis.insert(ch);
            vis.insert(m);
        }
        return cnt;
    }
};