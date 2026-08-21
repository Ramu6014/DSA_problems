//problem link: https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
    int findSubstr(string &s,int k){
        if(k==0)return 0;
        int n=s.size();
        int freq[26];
        for(int i=0;i<26;i++){
            freq[i]=0;
        }
        int l=0,r=0;
        int cnt=0;
        int len=0;
        while(r<n){
            if(freq[s[r]-'a']==0){
                len++;
            }
            freq[s[r]-'a']++;
            while(len>k){
                freq[s[l]-'a']--;
                if(freq[s[l]-'a']==0){
                    len--;
                }
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
  public:
    int countSubstr(string& s, int k) {
        // code here
        return findSubstr(s,k)-findSubstr(s,k-1);
    }
}