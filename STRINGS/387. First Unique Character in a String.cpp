//problem link: https://leetcode.com/problems/first-unique-character-in-a-string/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};