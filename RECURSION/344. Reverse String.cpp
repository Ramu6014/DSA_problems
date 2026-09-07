//problem link: https://leetcode.com/problems/reverse-string/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    void func(int indx,int n,vector<char>&s){
        if(indx>=(n/2))return;
        swap(s[indx],s[n-indx-1]);
        func(indx+1,n,s);
    }
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        return func(0,n,s);
    }
};