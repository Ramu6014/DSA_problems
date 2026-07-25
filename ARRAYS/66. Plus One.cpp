//problem link: https://leetcode.com/problems/plus-one/
//timeComplexity: O(1)
//spaceComplexity: o(1)

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]+=1;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};