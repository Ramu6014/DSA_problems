//problem link: https://www.geeksforgeeks.org/problems/urlify-a-given-string--141625/1
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
  public:
    string URLify(string &s) {
        // code here
        string replace="%20";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ans+=replace;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};