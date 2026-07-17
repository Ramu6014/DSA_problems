//problem link: https://leetcode.com/problems/reverse-vowels-of-a-string/
//timeComplexity: O(n/2)
//spaceComplexity: O(1)

class Solution {
private:
     bool isValid(char ch){
        return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    }
public:
    string reverseVowels(string s) {
        int n=s.size();
        int left=0,right=n-1;
        while(left<right){
            while(left<right && !isValid(s[left])){
                left++;
            }
            while(right>left && !isValid(s[right])){
                right--;
            }
            if(left<right){
                swap(s[left],s[right]);
                left++,right--;
            }
        }
        return s;
    }
};