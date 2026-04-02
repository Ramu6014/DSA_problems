//problem link: https://leetcode.com/problems/isomorphic-strings/
//timeComplexity: O(n)
//spaceComplexity: O(1)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        unordered_map<char,char>m1,m2;
        for(int i=0;i<n;i++){
            char c1=s[i],c2=t[i];
            //s->t
            if(m1.find(c1)==m1.end()){
                m1[c1]=c2;
            }
            else{
                if(m1[c1]!=c2){
                    return false;
                }
            }
            //t->s
            if(m2.find(c2)==m2.end()){
                m2[c2]=c1;
            }
            else{
                if(m2[c2]!=c1){
                    return false;
                }
            }
        }
        return true;
    }
};