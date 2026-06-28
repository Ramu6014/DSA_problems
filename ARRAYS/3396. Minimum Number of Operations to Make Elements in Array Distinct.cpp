//problem link: https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/ 
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int cnt=0;
        int tempSize=n;
        int indx=0;
        while(1){
            if(freq.size()==tempSize){
                break;
            }
            if(tempSize<3){
                cnt++;
                break;
            }
            int boundary=indx+3;
            while(indx<boundary){
                freq[nums[indx]]--;
                if(freq[nums[indx]]==0){
                    freq.erase(nums[indx]);
                }
                indx++;
            }
            cnt++;
            tempSize=n-indx;
        }
        return cnt;
    }
};