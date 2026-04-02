//problem link: https://leetcode.com/problems/rotate-string/description/
//timeComplexity: O(n^2)
//spaceComplexity: O(1)
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(s==goal){
            return true;
        }
        for(int i=0;i<n;i++){
            reverse(s.begin()+1,s.end());
            reverse(s.begin(),s.end());
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};