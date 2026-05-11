//problem link: https://www.geeksforgeeks.org/problems/leap-year0943/1
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if(n%4==0 && n%100!=0 || n%400==0){
            return true;
        }
        return false;
    }
};