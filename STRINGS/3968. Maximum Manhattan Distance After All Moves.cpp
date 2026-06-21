//problem link: https://leetcode.com/problems/maximum-manhattan-distance-after-all-moves/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
private:
    void setCordinates(int &x,int &y,char ch){
        if(ch=='L'){
            x+=-1;
        }
        else if(ch=='R'){
            x+=1;
        }
        else if(ch=='U'){
            y+=1;
        }
        else{
            y+=-1;
        }
        return;
    }
public:
    int maxDistance(string moves) {
        int n=moves.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            if(moves[i]!='_'){
                freq[moves[i]]++;
            }
        }
        int maxi=INT_MIN;
        char ch='.';
        for(auto it: freq){
            if(it.second>maxi){
                ch=it.first;
                maxi=it.second;
            }
        }
        if(maxi==INT_MIN){
            return moves.size();
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(moves[i]!='_'){
                setCordinates(x,y,moves[i]);
            }
            else{
                setCordinates(x,y,ch);
            }
        }
        return abs(0-x)+abs(0-y);
    }
};