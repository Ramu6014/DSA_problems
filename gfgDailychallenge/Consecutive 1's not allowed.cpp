//problem link: https://www.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1
//timeComplexity: O(2^n)
//spaceComplexity: O()
class Solution {
  public:
    void func(int indx,string &s,set<string>&st){
        if(indx==s.size()){
            st.insert(s);
            return;
        }
        st.insert(s);
        char ch=s[indx];
        int x=s[indx]-'0';
        x^=1;
        if(indx==0 || (s[indx-1]-'0'!=1 || x!=1)){
            s[indx]=x+'0';
        }
        func(indx+1,s,st);
        s[indx]=ch;
        func(indx+1,s,st);
    }
    int countStrings(int n) {
        // code here
        string s="";
        for(int i=0;i<n;i++){
            s+='0';
        }
        set<string>st;
        func(0,s,st);
        return st.size();
    }
};