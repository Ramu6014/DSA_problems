//problem link: https://leetcode.com/problems/find-words-containing-character/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n*m)
//spaceComplexity: O(1)

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};