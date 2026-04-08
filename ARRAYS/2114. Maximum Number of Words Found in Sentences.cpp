//problem link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n*m)
//spaceComplexity: O(1)

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCnt=0;
        for(int i=0;i<sentences.size();i++){
            int cnt=0;
            for(int j=0;j<sentences[i].size();j++){
                while(j<sentences[i].size() && sentences[i][j]!=' '){
                    j++;
                }
                cnt++;
            }
            // cnt--;
            maxCnt=max(maxCnt,cnt);
        }
        return maxCnt;
    }
};