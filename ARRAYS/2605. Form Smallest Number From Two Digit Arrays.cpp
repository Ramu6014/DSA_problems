//problem link: https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/
//timeComplexity: o(nlogn+mlogm)
//spaceComplexity: O(1)

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        unordered_map<int,int>freq;
        for(int i=0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(freq.find(nums2[i])!=freq.end()){
                return nums2[i];
            }
        }
        int first=-1,second=-1;
        if(nums1[0]<=nums2[0]){
            first=nums1[0];
            second=nums2[0];
        }
        else{
            first=nums2[0];
            second=nums1[0];
        }
        string s=to_string(first)+to_string(second);
        return stoi(s);
    }
};