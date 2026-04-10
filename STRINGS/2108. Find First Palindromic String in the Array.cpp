//problem link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n*m)
//spaceComplexity: O(1)

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int j=words[i].size();
            bool flag=true;
            int l=0,m=j-1;
            while(l<m){
                if(words[i][l]!=words[i][m]){
                    flag=false;
                    break;
                }
                l++,m--;
            }
            if(flag){
                return words[i];
            }
        }
        return "";
    }
};