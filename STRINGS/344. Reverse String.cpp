//problem link: https://leetcode.com/problems/reverse-string/description/
//timeComplexity: O(n/2)
//spaceComplexity: o(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int left=0,right=n-1;
        while(left<right){
            swap(s[left],s[right]);
            left++,right--;
        }
    }
};