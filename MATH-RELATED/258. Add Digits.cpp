//problem link: https://leetcode.com/problems/add-digits/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
public:
    int addDigits(int num) {
        if(num==0){
            return 0;
        }
        return 1+(num-1)%9;
    }
};