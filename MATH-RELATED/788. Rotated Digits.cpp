//problem link: https://leetcode.com/problems/rotated-digits/submissions/1993123638/
//timeComplexity: O(NlogN)
//spaceComplexity: O(1)

class Solution {
public:
    unordered_map<int,int>mpp;
    bool isValid(string num){
        string rotated="";
        for(auto it: num){
            int r=it-'0';
            if(mpp.find(r)==mpp.end()){
                return false;
            }
            rotated+=mpp[r]+'0';
        }
        return rotated!=num;
    }
    int rotatedDigits(int n) {
        mpp[0]=0;
        mpp[1]=1;
        mpp[2]=5;
        mpp[5]=2;
        mpp[6]=9;
        mpp[9]=6;
        mpp[8]=8;
        
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(isValid(to_string(i))){
                cnt++;
            }
        }
        return cnt;
    }
};