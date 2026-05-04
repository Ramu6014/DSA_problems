//problem link: https://www.geeksforgeeks.org/problems/palindrome-numbers0942/1
//timeComplexity: O(logn)
//spaceComplexity: O(logn)

class Solution {
  public:
    bool isPalindrome(vector<int>&temp){
        int i=0,j=temp.size()-1;
        while(i<=j){
            if(temp[i]!=temp[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
    bool isBinaryPalindrome(int n) {
        // code hereS
        int x=n;
        vector<int>temp;
        while(x>0){
            int rem=x%2;
            temp.push_back(rem);
            x/=2;
        }
         return isPalindrome(temp);
    }
};