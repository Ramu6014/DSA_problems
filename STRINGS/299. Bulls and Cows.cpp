//problem link: https://leetcode.com/problems/bulls-and-cows/
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int x=0;
        unordered_map<char,int>secFreq;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                x++;
            }
            else{
                secFreq[secret[i]]++;
            }
        }
        int y=0;
        for(int i=0;i<n;i++){
            if(secret[i]!=guess[i]){
                if(secFreq.find(guess[i])!=secFreq.end()){
                    y++;
                    secFreq[guess[i]]--;
                    if(secFreq[guess[i]]==0){
                        secFreq.erase(guess[i]);
                    }
                }
            }
        }
        string res="";
        res+=to_string(x);
        res+='A';
        res+=to_string(y);
        res+='B';
        return res;
    }
};