//problem link: https://leetcode.com/problems/count-the-digits-that-divide-a-number/?envType=problem-list-v2&envId=prshgx6i
//timeComplexity: O(log₁₀(num))
//spaceComplexity: O(1)

class Solution {
public:
    int countDigits(int num) {
        int x=num;
        int cnt=0;
        while(x>0){
             int digit=x%10;
             if(num%digit==0){
                cnt++;
             }
             x/=10;
        }
        return cnt;
    }
};
