//problem link: https://leetcode.com/problems/reverse-words-in-a-string/
//timeComplexity: O(n)*O(k/2)
//spaceComplexity: O(n)

class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string res="";
        int indx=n-1;
        string temp="";
        while(indx>=0){
            if(s[indx]!=' '){
                temp+=s[indx];
            }
            else if(temp.size()>0){
                reverse(temp.begin(),temp.end());
                res+=temp+' ';
                temp="";
            }
            indx--;
        }
        if(temp.size()>0){
            reverse(temp.begin(),temp.end());
            res=res+temp+' ';
        }
        int n1=res.size();
        return res.substr(0,n1-1);
    }
};
