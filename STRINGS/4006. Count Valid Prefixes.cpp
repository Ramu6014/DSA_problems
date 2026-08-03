//problem link: https://leetcode.com/problems/count-valid-prefixes/
//timeComplexity: o(n^2)
//spaceComplexity: O(n)

class Solution {
private:
    bool isValid(string temp){
        int zero=0,one=0;
        for(int i=0;i<temp.size();i++){
            int val=temp[i]-'0';
            if(val==0)zero++;
            else one++;
        }
        return abs(one-zero)<=1;
    }
public:
    int countValidPrefixes(string s) {
        int n=s.size();
        string temp="";
        int cnt=0;
        for(int i=0;i<n;i++){
            temp+=s[i];
            if(isValid(temp)){
                cnt++;
            }
        }
        return cnt;
    }
};