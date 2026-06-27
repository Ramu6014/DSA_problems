//problem link: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        bool flag=true;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='a' && flag==false){
                return false;
            }
            else if(ch=='b'){
                flag=false;
            }
        }
        return true;
    }
};