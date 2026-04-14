//problem link: https://www.geeksforgeeks.org/problems/remove-spaces0128/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                res+=s[i];
            }
        }
        return res;
    }
};