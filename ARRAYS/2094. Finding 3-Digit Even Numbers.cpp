//problem link: https://leetcode.com/problems/finding-3-digit-even-numbers/
//timeComplexity: o(n^3)
//spaceComplexity: O(1)

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        set<int>st;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            if(digits[i]==0||freq.find(digits[i])!=freq.end())continue;
            freq[digits[i]]++;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                for(int k=0;k<n;k++){
                    if(k==i||k==j||digits[k]%2!=0)continue;
                    st.insert(digits[i]*100+digits[j]*10+digits[k]);
                }
            }
        }
        vector<int>ans;
        for(auto it: st){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};