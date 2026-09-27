//problem link: https://leetcode.com/problems/minimum-queen-moves-to-reach-target/
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
    bool  leftSided(vector<int>& source, vector<int>& target){
        int st=source[0];
        int end=source[1];
        //upperDiagonal
        while(st>=1 && end<=8){
            if(st==target[0] && end==target[1])return true;
            st--;
            end++;
        }
        st=source[0];
        end=source[1];
        //lowerDiagonal
        while(st<=8 && end>=1){
            if(st==target[0] && end==target[1])return true;
            st++;
            end--;
        }
        return false;
    }
    bool  rightSided(vector<int>& source, vector<int>& target){
        int st=source[0];
        int end=source[1];
        //upperDiagonal
        while(st<=8 && end<=8){
            if(st==target[0] && end==target[1])return true;
            st++;
            end++;
        }
        st=source[0];
        end=source[1];
        //lowerDiagonal
        while(st>=1 && end>=1){
            if(st==target[0] && end==target[1])return true;
            st--;
            end--;
        }
        return false;
    }
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        if(source[0]==target[0] && source[1]==target[1])return 0;
        if(source[0]==target[0] || source[1]==target[1])return 1;
        if(leftSided(source,target) || rightSided(source,target))return 1;
        return 2;
    }
};