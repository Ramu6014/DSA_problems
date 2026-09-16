//problem link: https://leetcode.com/problems/check-if-n-and-its-double-exist/
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(freq.find(2*arr[i])!=freq.end() && freq[2*arr[i]]!=i)return true;
        }
        return false;
    }
};