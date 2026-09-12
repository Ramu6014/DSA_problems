//problem link: https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/
//timeComplexity: O(k)
//spaceComplexity: O(k)

class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        int indx=1;
        while(1){
            string temp="";
            for(int i=0;i<s.size();i++){
                char ch=s[i]+1;
                temp=temp+ch;
            }
            s+=temp;
            if(s.size()>=k)break;
        }
        return s[k-1];
    }
};