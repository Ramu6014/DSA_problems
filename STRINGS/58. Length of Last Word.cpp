//problem link: https://leetcode.com/problems/length-of-last-word/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int indx=n-1;
        int len=0;
        while(indx>=0 && s[indx]==' '){
            indx--;
        }
        while(indx>=0 && s[indx]!=' '){
            len++;
            indx--;
        }
        return len;
    }
};