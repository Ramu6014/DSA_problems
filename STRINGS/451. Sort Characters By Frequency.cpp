//problem link: https://leetcode.com/problems/sort-characters-by-frequency/
//timeComplexity: O(nlogn)
//spaceComplexity: O(1)
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        sort(s.begin(),s.end(),[&](char c1,char c2){
            if(freq[c1]==freq[c2]){
                return c1<c2;
            }
            return freq[c1]>freq[c2];
        });
        return s;
    }
};