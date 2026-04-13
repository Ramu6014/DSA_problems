//problem link: https://leetcode.com/problems/robot-return-to-origin/submissions/1977417980/?envType=daily-question&envId=2026-04-13
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    bool judgeCircle(string moves) {
        int upDown=0,leftRight=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                upDown++;
            }
            else if(moves[i]=='D'){
                upDown--;
            }
            else if(moves[i]=='L'){
                leftRight++;
            }
            else{
                leftRight--;
            }
        }
        return (upDown==0 && leftRight==0);
    }
};