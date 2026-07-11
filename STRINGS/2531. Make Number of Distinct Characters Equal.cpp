//problem link: https://leetcode.com/problems/make-number-of-distinct-characters-equal/
//timeComplexity: o(n+m)
//spaceComplexity: o(1)

class Solution {
public:
    bool isItPossible(string word1, string word2){
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(int i=0;i<word1.size();i++){
            freq1[word1[i]]++;
        }
        for(int i=0;i<word2.size();i++){
            freq2[word2[i]]++;
        }

        for(auto it1: freq1){
            char c1=it1.first;
            for(auto it2: freq2){
                char c2=it2.first;

                auto mp1=freq1;
                auto mp2=freq2;

                mp1[c1]--;
                if(mp1[c1]==0){
                    mp1.erase(c1);
                }
                mp2[c2]--;
                if(mp2[c2]==0){
                    mp2.erase(c2);
                }

                mp1[c2]++;
                mp2[c1]++;
                if(mp1.size()==mp2.size()){
                    return true;
                }
            }
        }
        return false;
    }
};