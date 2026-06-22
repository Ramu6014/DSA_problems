//problem link: https://www.geeksforgeeks.org/problems/dam-of-candies--141631/1
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
  public:
    int maxArea(vector<int> &height) {
        // code here
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxArea=-1;
        while(i<j){
            if(height[i]<=height[j]){
                maxArea=max(maxArea,min(height[i],height[j])*(j-i-1));
                i++;
            }
            else{
                maxArea=max(maxArea,min(height[i],height[j])*(j-i-1));
                j--;
            }
        }
        return maxArea;
    }
};