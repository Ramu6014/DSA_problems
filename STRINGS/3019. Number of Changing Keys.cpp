//problem link: https://leetcode.com/problems/number-of-changing-keys/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int countKeyChanges(string s) {
        int cnt=0;
        if(s.size()==1){
            return 0;
        }
        for(int i=1;i<s.size();i++){
            char first=tolower(s[i-1]);
            char second=tolower(s[i]);
            if(first!=second){
                cnt++;
            }
        }
        return cnt;
    }
};