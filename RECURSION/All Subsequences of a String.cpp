//problem link: https://www.geeksforgeeks.org/problems/power-set4302/1
//timeComplexity: O(2^n)+O(n*log(2^n))
//spaceComplexity: O(n)

class Solution {
    void func(int indx,string ds,string &s,vector<string>&ans){
        if(indx>=s.size()){
            ans.push_back(ds);
            return;
        }
        ds+=s[indx];
        func(indx+1,ds,s,ans);
        ds.pop_back();
        func(indx+1,ds,s,ans);
    }
  public:
    vector<string> powerSet(string &s) {
        // Code here
        vector<string>ans;
        func(0,"",s,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};