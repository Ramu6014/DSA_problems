//problem link: https://www.geeksforgeeks.org/problems/triangle-pattern-1662285196/1
//timeComplexity: O(n^2)
//spaceComplexity: O(1)

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            char ch='A';
            for(int j=i;j<=n;j++){
                cout<<ch;
                ch++;
            }
            cout<<endl;
        }
    }
};