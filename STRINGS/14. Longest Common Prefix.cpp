//problem link: https://leetcode.com/problems/longest-common-prefix/
//time complexity: O(n*m)
//space complexity: O(m)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int minLen=INT_MAX;
        for(int i=1;i<strs.size();i++){
            string temp="";
            for(int j=0;j<strs[i].size();j++){
                if(j<strs[i-1].size() && strs[i][j]==strs[i-1][j]){
                    temp+=strs[i][j];
                }
                else{
                    break;
                }
            }
            if(temp.size()==0){
                return "";
            }
            else if(temp.size()<minLen){
                minLen=temp.size();
                res=temp;
            }
        }
        return minLen==INT_MAX?strs[0]:res;
    }
};