//problem link: https://www.geeksforgeeks.org/problems/summed-matrix5834/1?page=1&category=Matrix&difficulty=Easy&sortBy=submissions
//timeComplexity: o(n*n)
//spaceComplexity: O(1)


class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long val=(i+1)+(j+1);
                if(val==q){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};