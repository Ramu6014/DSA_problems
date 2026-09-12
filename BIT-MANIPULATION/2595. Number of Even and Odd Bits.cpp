//problem link: https://leetcode.com/problems/number-of-even-and-odd-bits/
//timeComplexity: o(log(n))
//spaceComplexity: O(1)

class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0,odd=0;
        int indx=0;
        while(n!=0){
            int rem=n%2;
            n/=2;
            if(indx%2==0 && rem==1){
                even++;
            }
            else if(indx%2!=0 && rem==1){
                odd++;
            }
            indx++;
        }
        return {even,odd};
    }
};