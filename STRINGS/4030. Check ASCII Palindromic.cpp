//problem link: https://leetcode.com/problems/check-ascii-palindromic/
//timeComplexity: O(nlogn)
//spaceComplexity: O(1)

class Solution {
    void constructBinary(char ch,string &binary){
        int val=(int)ch;
        string temp="";
        for(int i=0;i<8;i++){
            int rem=val%2;
            temp+=(rem+'0');
            val/=2;
        }
        reverse(temp.begin(),temp.end());
        binary+=temp;
        return;
    }
    bool isValid(string &binary){
        int i=0,j=binary.size()-1;
        while(i<j){
            if(binary[i]!=binary[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
public:
    bool isPalindromic(string s) {
        string binary="";
        for(int i=0;i<s.size();i++){
            constructBinary(s[i],binary);
        }
        return isValid(binary);
    }
};