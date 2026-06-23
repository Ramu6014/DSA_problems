//problem link: https://www.geeksforgeeks.org/problems/killing-spree3020/1
//timeComplexity: o(cubeRoot(p))
//spaceComplexity: O(1)

class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int cnt=0;
        int i=1;
        while(1LL*i*i<=p){
            p=p-i*i;
            cnt++;
            i++;
        }
        return cnt;
    }
};
