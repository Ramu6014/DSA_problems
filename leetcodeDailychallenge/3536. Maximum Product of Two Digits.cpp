//problem link: https://leetcode.com/problems/maximum-product-of-two-digits/?envType=daily-question&envId=2026-07-25
//timeComplexity: O(log(n)log(logn))
//spaceComplexity: O(log(n))

class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        int len=s.size();
        return (s[len-1]-'0')*(s[len-2]-'0');
    }
};