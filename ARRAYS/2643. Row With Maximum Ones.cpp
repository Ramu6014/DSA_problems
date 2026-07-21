//problemLink: https://leetcode.com/problems/row-with-maximum-ones/
//timeComplexity: O(n*m)
//spaceComplexity: o(1)

class Solution {
private:
    int findOnes(vector<int>temp){
        int cnt=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row=0;
        int maxCnt=0;
        for(int i=0;i<mat.size();i++){
            int cnt=findOnes(mat[i]);
            if(cnt>maxCnt){
                maxCnt=cnt;
                row=i;
            }
        }
        return {row,maxCnt};
    }
};