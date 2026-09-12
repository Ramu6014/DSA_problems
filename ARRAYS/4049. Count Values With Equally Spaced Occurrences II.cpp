//problem link: https://chatgpt.com/c/6a9d1a14-92a0-83ee-ac5e-c7238035b851
//timeComplexity: o(n)
//spaceComplexity: o(n)

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]].push_back(i);
        }
        int cnt=0;
        for(auto it: freq){
            if(it.second.size()>=3){
                int diff=it.second[1]-it.second[0];
                bool flag=true;
                for(int i=2;i<it.second.size();i++){
                    if(it.second[i]-it.second[i-1] != diff){
                        flag=false;
                        break;
                    }
                }
                if(flag)cnt++;
            }
        }
        return cnt;
    }
};