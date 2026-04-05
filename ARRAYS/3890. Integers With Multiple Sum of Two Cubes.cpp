//problem link: https://leetcode.com/problems/integers-with-multiple-sum-of-two-cubes/description/
//timeComplexity: O(n^(2/3) log n)
//spaceComplexity: O(n^(2/3))

class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int,int>freq;
        int lmt=cbrt(n);
        for(int i=1;i<=lmt;i++){
            for(int j=i;j<=lmt;j++){
                int sum=i*i*i+j*j*j;
                if(sum>n){
                    break;
                }
                freq[sum]++;
            }
        }
        vector<int>ans;
        for(auto it: freq){
            if(it.second>=2){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};