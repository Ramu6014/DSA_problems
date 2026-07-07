//problem link: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/?envType=daily-question&envId=2026-07-07
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string s=to_string(n);
        string res="";
        long long sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                res+=s[i];
                sum+=s[i]-'0';
            }
        }
        long long ans=stoi(res);
        return ans*sum;
    }
};