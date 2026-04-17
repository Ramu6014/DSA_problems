//problem link: https://leetcode.com/problems/type-of-triangle/
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
public:
    string triangleType(vector<int>& nums) {
     int x=nums[0],y=nums[1],z=nums[2];
     if(x+y<=z || x+z<=y || y+z<=x){
        return "none";
     }
     else if(x==y && y==z){
        return "equilateral";
     }
     else if(x==y || x==z || y==z){
        return "isosceles";
     }
     return "scalene";   
    }
};