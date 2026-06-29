//problem link: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
//timeComplexity: O(n*m*k)
//spaceComplexity: O(1)

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt=0;
        for(auto s: patterns){
            if(word.find(s)!=string::npos){
                cnt++;
            }
        }
        return cnt;
    }
};