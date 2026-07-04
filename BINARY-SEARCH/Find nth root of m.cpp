//problem link: https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1
//timeComplexity: o(log(m))
//spaceComplexity: o(1)

class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int low=0,high=m;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long x=pow(mid,n);
            if(x==m){
                return mid;
            }
            else if(x>m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};