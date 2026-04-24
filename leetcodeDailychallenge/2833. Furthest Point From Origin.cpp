//problem link: https://leetcode.com/problems/furthest-point-from-origin/?envType=daily-question&envId=2026-04-24
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0,right=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                left++;
            }
            else if(moves[i]=='R'){
                right++;
            }
        }
        if(left==0 && right==0){
            return moves.size();
        }
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='_'){
                if(left>right){
                    left++;
                }
                else if(left<right){
                    right++;
                }
                else{
                    left++;
                }
            }
        }
        return abs(left-right);
    }
};