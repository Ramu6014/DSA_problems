//problem link: https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/
//timeComplexity: O(n+m)
//spaceComplexity: O(n+m)

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>freq;
        for(int i=0;i<knowledge.size();i++){
            freq[knowledge[i][0]]=knowledge[i][1];
        }
        string res="";
        int indx=0;
        int n=s.size();
        while(indx<n){
            if(s[indx]!='('){
                res+=s[indx];
            }
            else{
                int newIndx=indx+1;
                string temp="";
                while(newIndx<n && s[newIndx]!=')'){
                    temp+=s[newIndx];
                    newIndx++;
                }
                if(freq.find(temp)==freq.end()){
                    res+='?';
                }
                else{
                    res+=freq[temp];
                }
                indx=newIndx;
            }
            indx++;
        }
        return res;
    }
};  