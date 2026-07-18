//problem link: https://leetcode.com/problems/rearrange-string-to-avoid-character-pair/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string temp="";
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=x){
                res+=s[i];
            }
            else{
                temp+=s[i];
            }
        }
        return res+temp;
    }
};