//problem link: http://geeksforgeeks.org/problems/triangle-pattern-1661718455/1
//timeComplexity: O(n^2)
//spaceComplexity: O(1)

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int val=-1;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                val=0;
            }
            else{
                val=1;
            }
            for(int j=1;j<=i;j++){
                cout<<val<<" ";
                val=val^1;
            }
            cout<<endl;
        }
    }
};