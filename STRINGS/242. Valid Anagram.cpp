//problem link: https://leetcode.com/problems/valid-anagram/
//timeComplexity: O(n)
//spaceComplexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size()!=s.size()){
            return false;
        }
        vector<int>checker(26,0);
        for(int i=0;i<t.size();i++){
            checker[t[i]-'a']++;
            checker[s[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(checker[i]!=0){
                return false;
            }
        }
        return true;
    }
};